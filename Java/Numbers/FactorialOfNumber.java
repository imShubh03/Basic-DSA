public class FactorialOfNumber {
    public static int factorial(int num) {
        int product = 1;
        while (num > 0) {
            product *= num;
            num--;
        }

        return product;
    }

    public static void main(String[] args) {
        int num = 3;
        System.out.println(factorial(num));
    }
}
