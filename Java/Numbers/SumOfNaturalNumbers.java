public class SumOfNaturalNumbers {

    public static int sum(int num) {
        int sum = 0;

        for (int i = 0; i <= num; i++) {
            sum += i;
        }

        return sum;
    }

    public static int sum2(int num) {
        int sum = 0;

        sum = num * (num + 1) / 2;

        return sum;
    }

    public static void main(String[] args) {
        int num = 10;
        System.out.println(sum2(num));
    }

}