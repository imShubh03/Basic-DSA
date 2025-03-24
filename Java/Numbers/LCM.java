public class LCM {

    public static int lcm(int n1, int n2) {
        int gcd = 1;

        for (int i = 2; i <= Math.min(n2, n1); i++) {
            if (n1 % i == 0 && n2 % i == 0) {
                gcd = i;
            }
        }

        int lcm = (n1 * n2) / gcd;

        return lcm;

    }

    public static void main(String[] args) {
        int n1 = 4; 
        int n2 = 8;
        System.out.println(lcm(n1, n2));
    }
}
