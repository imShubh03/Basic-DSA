public class ReverseOfDigits {

    public static int reverse(int num) {
        int rem = 0;
        while (num > 0) {
            int lastDigit = num % 10;
            rem = rem * 10 + lastDigit;
            num = num / 10;
        }

        return rem;
    }

    public static void main(String[] args) {
        int num = 12345;
        System.out.println(reverse(num));
    }

}
