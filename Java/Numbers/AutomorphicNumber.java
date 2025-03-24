/*
 * Problem Statement: Given a number, check if it is automorphic or not. A number is called an Automorphic number if and only if its square ends in the same digits as the number itself.
 * Example 1:
Input Format: N = 76
Result: Automorphic Number
Explanation: Calculating 76 * 76 gives 5776, it ends with the given number.

 */

public class AutomorphicNumber {

    public static boolean automorphic(int num) {
        int sq = num * num;

        while (num > 0) {
            if (num % 10 != sq % 10) {
                return false;
            }

            num = num / 10;
            sq = sq / 10;
        }

        return true;
    }

    public static void main(String[] args) {
        int num = 76;
        System.out.println(automorphic(num));
    }
}
