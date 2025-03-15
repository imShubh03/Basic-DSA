import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class FindNonRepeatingElements {
    public static void main(String[] args) {
        int n = 6;
        int[] arr = new int[n];

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the elements in array:");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println("Non Repeating Elements: " + findNonRepeating(arr));

        sc.close();
    }

    public static ArrayList<Integer> findNonRepeating(int[] arr) {
        ArrayList<Integer> res = new ArrayList<>();

        Map<Integer, Integer> map = new HashMap<>();

        for (int i = 0; i < arr.length; i++) {
            if (map.containsKey(arr[i])) {
                map.put(arr[i], map.get(arr[i]) + 1);
            } else {
                map.put(arr[i], 1);
            }
        }

        for (int i = 0; i < arr.length; i++) {
            if (map.get(arr[i]) == 1 && !res.contains(arr[i])) {
                res.add(arr[i]);
            }
        }

        return res;
    }
}
