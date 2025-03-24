import java.util.ArrayList;
import java.util.List;

public class AllPrimeFactors {

    public static ArrayList<Integer> primeFactors(int num) {
        ArrayList<Integer> list = new ArrayList<>();
        for (int i = 2; i <= num; i++) {
            if (num % i == 0) {
                list.add(i);
            }

            while (num % i == 0) {
                num = num / i;
            }
        }

        return list;
    }

    public static void main(String[] args) {
        int n = 60;
        System.out.println(primeFactors(n));
    }
}
