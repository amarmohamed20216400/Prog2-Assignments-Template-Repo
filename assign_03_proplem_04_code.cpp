import java.util.Scanner;

public class OddSum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        for (int i = 0; i < T; i++) {
            int X = sc.nextInt();
            int Y = sc.nextInt();

            int sum = 0;
            int count = 0;

            while (count < Y) {
                if (X % 2 != 0) {
                    sum += X;
                    count++;
                }
                X++;
            }

            System.out.println(sum);
        }
    }
}
