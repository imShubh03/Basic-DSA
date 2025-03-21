public class PalindromeNumber {

    public static boolean palindrome(int num) {
        int reverse = 0;
        int temp = num;
        while (num > 0) {
            int lastDigit = num % 10;
            reverse = (reverse * 10) + lastDigit;
            num = num / 10;
        }

        if (temp != reverse) {
            return false;
        }

        return true;
    }

    public static void main(String[] args) {
        int num = 12321;

        System.out.println(palindrome(num));
    }
}
