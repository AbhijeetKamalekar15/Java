import java.util.*;

public class Solution {

    // Method to get k closest elements to x, excluding x itself
    public static int[] printKClosest(int[] arr, int k, int x) {
        List<Integer> result = new ArrayList<>();

        // PriorityQueue with custom comparator
        PriorityQueue<Integer> pq = new PriorityQueue<>((a, b) -> {
            int diffA = Math.abs(a - x);
            int diffB = Math.abs(b - x);
            if (diffA == diffB) {
                return b - a; // Prefer larger element if difference is same
            }
            return diffA - diffB;
        });

        for (int num : arr) {
            if (num != x) {
                pq.offer(num);
            }
        }

        // Extract top k closest elements
        for (int i = 0; i < k && !pq.isEmpty(); i++) {
            result.add(pq.poll());
        }

        // Convert to array
        int[] output = new int[result.size()];
        for (int i = 0; i < result.size(); i++) {
            output[i] = result.get(i);
        }

        return output;
    }

    // Main method for testing
    public static void main(String[] args) {
        // Example 1
        int[] arr1 = {1, 3, 4, 10, 12};
        int k1 = 2;
        int x1 = 4;
        int[] res1 = printKClosest(arr1, k1, x1);
        System.out.println("Output for Example 1:");
        for (int num : res1) {
            System.out.print(num + " ");
        }

        System.out.println();

        // Example 2
        int[] arr2 = {12, 16, 22, 30, 35, 39, 42, 45, 48, 50, 53, 55, 56};
        int k2 = 4;
        int x2 = 35;
        int[] res2 = printKClosest(arr2, k2, x2);
        System.out.println("Output for Example 2:");
        for (int num : res2) {
            System.out.print(num + " ");
        }
    }
}
