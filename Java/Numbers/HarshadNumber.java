public class HarshadNumber {
    public static void main(String[] args) {
        int n = 378;
        System.out.println(harshad(n));
    }

    public static boolean harshad(int num) {
        int sum = 0;
        int temp = num;
        while (num > 0) {
            int lastDigit = num % 10;
            sum += lastDigit;
            num = num / 10;
        }

        if (temp % sum == 0) {
            return true;
        }

        return false;
    }
}
