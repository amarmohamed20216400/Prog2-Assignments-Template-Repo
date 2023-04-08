import java.util.Scanner;

public class OddSum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        for (int i = 0; i < T; i++) {
            int X = sc.nextInt();
            int Y = sc.nextInt();

            int sum = 0;
            int start = Math.min(X, Y) + 1;
            int end = Math.max(X, Y) - 1;

            for (int j = start; j <= end; j++) {
                if (j % 2 != 0) {
                    sum += j;
                }
            }

            System.out.println(sum);
        }
    }
}
