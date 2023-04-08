import java.util.Scanner;

public class PUMGame {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();

        int num = 1;

        for (int i = 1; i <= N; i++) {
            System.out.print(num + " ");
            System.out.print(num + 1 + " ");
            System.out.print(num + 2 + " ");
            System.out.println("PUM");

            num += 4;
        }
    }
}
