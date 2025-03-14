public class SmallestElement {

    public static void main(String[] args) {
        int arr[] = { 2, 5, 1, 3, 0 };
        System.out.println(smallestElement(arr));
    }

    public static int smallestElement(int[] arr) {
        int smallest = arr[0];

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] < smallest) {
                smallest = arr[i];
            }
        }
        return smallest;
    }
}