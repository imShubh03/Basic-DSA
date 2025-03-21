public class PalindromeOfGivenRange {

    public static void palindrome(int min, int max) {
        for (int i = min; i < max; i++) {
            if (isPalindrome(i)) {
                System.out.print(i + " ");
            }
        }
    }

    public static boolean isPalindrome(int num) {
        int temp = num;
        int rev = 0;

        while (num > 0) {
            int lastDigit = num % 10;
            rev = (rev * 10) + lastDigit;
            num = num / 10;
        }

        if (temp != rev) {
            return false;
        }

        return true;

    }

    public static void main(String[] args) {
        int min = 10;
        int max = 50;

        palindrome(min, max);
    }
}