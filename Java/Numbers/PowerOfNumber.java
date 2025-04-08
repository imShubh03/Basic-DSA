public class PowerOfNumber {
    public static void main(String[] args) {
        int x = 5;
        int n = 3;

        System.out.println(power(x, n));
    }

    public static int power(int x, int n) {
        int ans = 1;
        for (int i = 0; i < n; i++) {
            ans = ans * x;
        }

        return ans;
    }
}
