public class StrongNumber {

    public static void strongNumber(int num) {
        int temp = num;
        int sum = 0;
        while (num > 0) {
            int last = num % 10;
            int product = 1;

            while (last > 0) {
                product *= last;
                last--;
            }
            sum += product;
            num = num / 10;
        }

        if (sum == temp) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }

    public static void main(String[] args) {
        int num = 145;
        strongNumber(num);
    }
}
