public class ArmstrongNumber {

    public static boolean armstrongNumber(int num) {
        int temp = num;
        int sum = 0;

        int k = String.valueOf(num).length();

        while (temp > 0) {

            int lastDigit = temp % 10;
            sum += Math.pow(lastDigit, k);
            temp = temp / 10;
        }

        if (sum != num) {
            return false;
        }

        return true;
    }

    public static void main(String[] args) {
        int num = 153;
        System.out.println(armstrongNumber(num));
    }
}
