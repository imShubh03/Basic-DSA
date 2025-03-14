import java.util.Arrays;

public class RearrangeInIncreasing_Decreasing {
    public static void main(String[] args) {
        int arr[] = { 8, 7, 1, 6, 5, 9 };
        int temp[] = rearrange(arr);
        System.out.println(Arrays.toString(temp));
    }

    public static int[] rearrange(int[] arr) {

        Arrays.sort(arr); // After sorting [1, 5, 6, 7, 8, 9]
        int index = 0;

        int[] temp = new int[arr.length];
        for (int i = 0; i < temp.length / 2; i++) {
            temp[index] = arr[i];
            index++;
        }

        for (int i = arr.length - 1; i >= temp.length / 2; i--) {
            temp[index] = arr[i];
            index++;
        }

        return temp;
    }
}
