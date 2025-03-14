import java.util.Arrays;

public class ArrayInsertion {

    // Insert at the beginning
    public static int[] insertBeginning(int[] arr, int element) {
        int[] newArr = new int[arr.length + 1];
        newArr[0] = element;
        System.arraycopy(arr, 0, newArr, 1, arr.length);
        return newArr;
    }

    // Insert at the end
    public static int[] insertEnding(int[] arr, int element) {
        int[] newArr = new int[arr.length + 1];
        System.arraycopy(arr, 0, newArr, 0, arr.length);
        newArr[arr.length] = element;
        return newArr;
    }

    // Insert at a specific position
    public static int[] insertAtPosition(int[] arr, int element, int pos) {
        if (pos < 1 || pos > arr.length + 1) {
            throw new IllegalArgumentException("Invalid position");
        }

        int[] newArr = new int[arr.length + 1];
        System.arraycopy(arr, 0, newArr, 0, pos - 1); // Copy elements before position
        newArr[pos - 1] = element; // Insert the element
        System.arraycopy(arr, pos - 1, newArr, pos, arr.length - (pos - 1)); // Copy remaining elements
        return newArr;
    }

    public static void main(String[] args) {
        int[] array = { 1, 2, 3, 4, 5 };

        array = insertBeginning(array, 6); // Add 6 at the beginning
        array = insertEnding(array, 7); // Add 7 at the end
        array = insertAtPosition(array, 8, 4); // Add 8 at position 4

        System.out.println(Arrays.toString(array)); // Output: [6, 1, 2, 8, 3, 4, 5, 7]
    }
}
