/*
 * When the sum of factorial of individual digits of a number is equal to the original number the number is called a strong number. 
Strong number is also known as Krishnamurthi number/Peterson Number.

Examples 1:
Input: N = 145
Output: Yes
Explanation: 1! + 4! + 5! = 145. Hence 145 is a strong number.
 */
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
        int num = 26;
        strongNumber(num);
    }
}
