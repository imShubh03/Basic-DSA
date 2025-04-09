public class AbundantNumber {
    public static void main(String[] args) {
        int n = 21;
        System.out.println(abundant(n));
    }

    public static boolean abundant(int num) {
        int temp = num;
        int sum = 0;
        for (int i = 1; i < num; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }

        if (sum > temp) {

            return true;
        }

        return false;
    }
}
