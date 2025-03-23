/*
 * What is A.P. (Arithmetic Progression)?
A.P. is the series of terms having the first term as a and d, common difference. Every next term in the A.P. is greater than the previous term by d units.
Example - 
-2, 3 , 8 , 13 , 18 , 23 , 28 , 33
First term , a = - 2
Common Difference , d=5
Last term , an=33
 */

public class SumOfAPSeries {

    public static int sumOfSeries(int n, int a, int d) {
        int sum = a;
        for (int i = 1; i <= n; i++) {
            sum += a;
            a += d;
        }
        return sum;
    }

    public static void main(String[] args) {
        int n = 8;
        int a = 2;
        int d = 5;
        System.out.println(sumOfSeries(n, a, d));
    }
}