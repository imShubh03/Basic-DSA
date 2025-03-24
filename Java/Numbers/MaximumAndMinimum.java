public class MaximumAndMinimum {

    public static void maxAndMin(int num) {
        int max = Integer.MIN_VALUE;
        int min = Integer.MAX_VALUE;
        while (num > 0) {
            int lastDigit = num % 10;
            max = Math.max(max, lastDigit);
            min = Math.min(min, lastDigit);

            num = num / 10;
        }

        System.out.println(min + " is minimum");
        System.out.println(max + " is maximum");

    }

    public static void main(String[] args) {
        int num = 4726;
        maxAndMin(num);
    }
}
