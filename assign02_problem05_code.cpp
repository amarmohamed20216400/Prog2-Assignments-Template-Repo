import java.util.Scanner;

public class PrimeNumber {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int t = input.nextInt();

        while (t-- > 0) {
            int x = input.nextInt();

            boolean isPrime = true;

            if (x == 1) {
                isPrime = false;
            }

            for (int i = 2; i <= Math.sqrt(x); i++) {
                if (x % i == 0) {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime) {
                System.out.println("Prime");
            } else {
                System.out.println("Not");
            }
        }
    }
}
