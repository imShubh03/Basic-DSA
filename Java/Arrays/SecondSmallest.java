public class SecondSmallest {
    public static void main(String[] args) {
        int[] arr = { 2, 5, 1, 3, 0 };
        System.out.println("Second Smallest Element " + secondSmallest(arr));
    }

    public static int secondSmallest(int[] arr) {
        int smallest = arr[0];
        int secondSmallest = arr[0];

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] < smallest) {
                secondSmallest = smallest;
                smallest = arr[i];
            } else if (arr[i] < smallest && secondSmallest != smallest) {
                secondSmallest = arr[i];
            }
        }

        System.out.println("Smallest Element " + smallest);

        return secondSmallest;
    }
}
