import java.util.Scanner;

public class YoungPhysicist {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int xSum = 0, ySum = 0, zSum = 0;
        for (int i = 0; i < n; i++) {
            xSum += sc.nextInt();
            ySum += sc.nextInt();
            zSum += sc.nextInt();
        }

        sc.close();

        if (xSum == 0 && ySum == 0 && zSum == 0)
            System.out.println("YES");
        else
            System.out.println("NO");

    }
}