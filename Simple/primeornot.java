import java.util.Scanner;

public class primeornot {
    public static int isPrime(int n) {
        if (n <= 1) return 0;     // 0 and 1 are not prime
        if (n == 2) return 1;     // 2 is prime

        for (int div = 2; div <= Math.sqrt(n); div++) {
            if (n % div == 0) {
                return 0;        // Not prime
            }
        }
        return 1;                // Prime
    }

    public static void main(String[] args) {
        int n;
        System.out.println("Enter the Number:");
        try (Scanner sc = new Scanner(System.in)) {
            n = sc.nextInt();
        }

        try {
            int s = isPrime(n);
            if (s == 1) {
                System.out.println("Prime Number!");
            } else {
                System.out.println("Not Prime Number!");
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
