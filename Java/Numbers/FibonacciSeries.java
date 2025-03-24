public class FibonacciSeries {

    public static void bruteForce(int num) {
        if (num == 0) {
            System.out.println("0");
            return;
        }
        int fibo[] = new int[num + 1];
        fibo[0] = 0;
        fibo[1] = 1;

        for (int i = 2; i <= num; i++) {
            fibo[i] = fibo[i - 1] + fibo[i - 2];
        }

        for (int i = 0; i < fibo.length; i++) {
            System.out.print(fibo[i] + " ");
        }

    }

    public static int optimal(int num) {
        if (num <= 1) {
            return num;
        }
        int last = optimal(num - 1);
        int slast = optimal(num - 2);

        return last + slast;
    }

    public static void main(String[] args) {
        int n = 2;
        System.out.println(optimal(n));
    }
}
