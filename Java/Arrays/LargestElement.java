public class LargestElement {
    public static void main(String[] args) {
        int[] arr = { 2, 5, 1, 3, 0 };
        System.out.println(largestElement(arr));
    }

    public static int largestElement(int[] arr) {
        int largest = arr[0];

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] > largest) {
                largest = arr[i];
            }
        }

        return largest;
    }
}
