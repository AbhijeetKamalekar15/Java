import java.util.Scanner;

public class TheatreSquare {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong(); // length of the square
        long m = sc.nextLong(); // width of the square
        long a = sc.nextLong(); // side length of the flagstone

        long len, wid;

        if (n % a == 0)
            len = n / a;
        else
            len = (n / a) + 1;

        if (m % a == 0)
            wid = m / a;
        else
            wid = (m / a) + 1;

        long totalTiles = len * wid;

        System.out.println(totalTiles);
    }
}
