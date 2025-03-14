import java.util.Arrays;

public class MedianOfArray {
    public static void main(String[] args) {
        int[] arr1 = { 2, 4, 1, 3, 5 }; // [1, 2 ,3 ,4, 5]
        int[] arr2 = { 2, 4, 1, 3, 5, 6 };// [1, 2, 3, 4, 5, 6]
        System.out.println(median(arr2));
    }

    public static double median(int[] arr) {
        int n = arr.length;
        Arrays.sort(arr);

        double median = 0;

        if (n % 2 == 0) {

            int a = n / 2 - 1;
            int b = n / 2;
            median = (double) (arr[a] + arr[b]) / 2;

        } else {
            median = arr[n / 2];
        }

        return median;

    }
}
