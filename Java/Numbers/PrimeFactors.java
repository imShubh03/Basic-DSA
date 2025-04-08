import java.util.ArrayList;
import java.util.List;

public class PrimeFactors {
    public static void main(String[] args) {
        int n = 60;
        System.out.println(primeFactors(n));
    }

    public static List<Integer> primeFactors(int n) {
        List<Integer> primeFactors = new ArrayList<>();

        for (int i = 2; i <= n; i++) {
            if (n % i == 0) {
                primeFactors.add(i);
            }

            while (n % i == 0) {
                n = n / i;
            }
        }

        return primeFactors;
    }
}