public class PrimeNumber {

    public static boolean isPrime(int num) {

        if (num < 2) {
            return false;
        }

        for (int i = 2; i <= Math.sqrt(num); i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;

    }

    public static void prime(int a, int b) {
        for (int i = a; i < b; i++) {
            if (isPrime(i)) {
                System.out.print(i + " ");
            }
        }
    }

    public static void main(String[] args) {
        int a = 3;
        int b = 10;

        prime(a, b);
    }
}