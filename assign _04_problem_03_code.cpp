import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int x = sc.nextInt();
        int pos = -1;

        for (int i = 0; i < n; i++) {
            if (arr[i] == x) {
                pos = i;
                break;
            }
        }

        System.out.println(pos);
    }
}
