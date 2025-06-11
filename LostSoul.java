import java.util.*;

public class LostSoul {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();
            int[] a = new int[n];
            int[] b = new int[n];

            for (int i = 0; i < n; i++) a[i] = sc.nextInt();
            for (int i = 0; i < n; i++) b[i] = sc.nextInt();

            System.out.println(maxMatches(n, a, b));
        }
    }

    private static int maxMatches(int n, int[] a, int[] b) {
        int[] cntA = new int[n + 2];
        int[] cntB = new int[n + 2];

        for (int i = 0; i < n; i++) {
            cntA[a[i]]++;
            cntB[b[i]]++;
        }

        int maxSame = 0;
        for (int i = 1; i <= n; i++) {
            maxSame = Math.max(maxSame, Math.min(cntA[i], cntB[i]));
        }

        // Create combined prefix frequency array
        int[] freq = new int[n + 2];
        for (int i = 0; i < n; i++) {
            freq[a[i]]++;
            freq[b[i]]++;
        }

        int[] maxFreqA = getMaxFreqRun(a);
        int[] maxFreqB = getMaxFreqRun(b);

        int maxRunA = maxFreqA[0];
        int maxRunB = maxFreqB[0];

        return Math.max(maxSame, Math.max(maxRunA, maxRunB));
    }

    // Helper function to get the max frequency run (for optimization)
    private static int[] getMaxFreqRun(int[] arr) {
        int n = arr.length;
        int[] freq = new int[n + 2];
        int maxFreq = 0;

        for (int num : arr) {
            freq[num]++;
            maxFreq = Math.max(maxFreq, freq[num]);
        }
        return new int[]{maxFreq};
    }
}
