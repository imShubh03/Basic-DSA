public class FactorsOfNumber {
    public static void main(String[] args) {
        int n = 6;
        factors(n);
    }

    public static void factors(int n) {
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                System.out.print(i + " ");
            }
        }
    }
}
