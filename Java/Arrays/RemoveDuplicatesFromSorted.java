import java.util.Arrays;

public class RemoveDuplicatesFromSorted {
    public static void main(String[] args) {
        int[] arr = { 1, 1, 2, 2, 2, 3, 3 };

        int temp[] = removeDuplicates(arr);
        System.out.println(Arrays.toString(temp));
    }

    public static int[] removeDuplicates(int[] arr) {
        int[] temp = new int[arr.length];

        temp[0] = arr[0];
        int index = 1;
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] != arr[i - 1]) {
                temp[index] = arr[i];
                index++;
            }
        }

        return temp;

    }
}
