import java.util.Arrays;

public class RotateArrayByKElements {
    public static void main(String[] args) {
        int[] arr = { 1, 2, 3, 4, 5, 6, 7 };
        int k = 3;
        int temp[] = rotateArray(arr, k);
        System.out.println(Arrays.toString(temp));
    }

    public static int[] rotateArray(int[] arr, int k) {
        int temp[] = new int[arr.length];

        for (int i = 0; i < k; i++) {
            temp[i] = arr[i];
        }

        int index = 0;
        for (int i = k; i < temp.length; i++) {
            arr[index] = arr[i];
            index++;
        }

        index = 0;
        for (int i = k + 1; i < arr.length; i++) {
            arr[i] = temp[index];
            index++;
        }

        return arr;
    }
}