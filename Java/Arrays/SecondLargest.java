public class SecondLargest {
    public static void main(String[] args) {
        int[] arr = { 2, 5, 1, 3, 0 };
        System.out.println(secondLargest(arr));
    }

    public static int secondLargest(int[] arr) {
        int largest = arr[0];
        int secondLargest = arr[0];

        for (int i = 1; i < arr.length; i++) {
            if (arr[i] > largest) {
                secondLargest = largest;
                largest = arr[i];
            }
            if (arr[i] > secondLargest && arr[i] != largest) {
                secondLargest = arr[i];
            }

        }

        System.out.println("Largest Element " + largest);
        return secondLargest;
    }
}
