import java.util.Arrays;

public class ReverseArray {
    public static void main(String[] args) {
        int arr[] = { 1, 2, 3, 4, 5 };
        int temp[] = reverse(arr);
        System.out.println("Reverse of Array: " + Arrays.toString(temp));
    }

    public static int[] reverse(int[] arr) {

        int i = 0;
        int j = arr.length - 1;

        while (i < j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }

        return arr;
    }
}
