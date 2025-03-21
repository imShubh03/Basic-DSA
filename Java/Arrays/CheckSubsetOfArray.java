import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

class CheckSubsetOfArray {

    public static boolean checkSubsetOfArray(int[] arr1, int[] arr2) {
        Map<Integer, Boolean> map = new HashMap<>();

        for (int i = 0; i < arr2.length; i++) {
            map.put(arr2[i], true);
        }

        for (int i = 0; i < arr1.length; i++) {
            if (!map.containsKey(arr1[i])) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {

        // Custom input
        int[] arr1 = { 1, 3, 4, 5, 2 };
        int arr2[] = { 2, 4, 3, 1, 7, 5, 15 };

        System.out.println(checkSubsetOfArray(arr1, arr2));

        // User input
        // int m = 3;
        // int n = 5;
        // int[] arr1 = new int[m];
        // int[] arr2 = new int[n];

        // Scanner sc = new Scanner(System.in);

        // System.out.println("Enter values for first array: ");
        // for (int i = 0; i < m; i++) {
        // arr1[i] = sc.nextInt();
        // }

        // System.out.println("Enter values for second array: ");

        // for (int i = 0; i < n; i++) {
        // arr2[i] = sc.nextInt();
        // }

        // sc.close();
    }
}