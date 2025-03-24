public class GCD {

    public static int better(int n1, int n2) {
        int gcd = 1;
        for (int i = Math.min(n2, n1); i > 1; i--) {
            if (n1 % i == 0 && n2 % i == 0) {
                gcd = i;
            }
        }

        return gcd;
    }

    public static int bruteForce(int n1, int n2) {
        int gcd = 1;

        for (int i = 1; i < Math.min(n1, n2); i++) {
            if (n1 % i == 0 && n2 % i == 0) {
                gcd = i;
            }
        }

        return gcd;
    }

    public static void main(String[] args) {
        int n1 = 9;
        int n2 = 12;
        System.out.println(better(n1, n2));
    }
}
