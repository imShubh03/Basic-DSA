import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class FindRepeatingElements {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = 8;
        int[] arr = new int[n];

        System.out.println("Enter values in array");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.println(findRepeating(arr));

        sc.close();
    }

    public static ArrayList<Integer> findRepeating(int[] arr) {
        ArrayList<Integer> res = new ArrayList<>();

        Map<Integer, Integer> map = new HashMap<>();

        for (int i = 0; i < arr.length; i++) {
            if (map.containsKey(arr[i])) {
                map.put(arr[i], map.get(arr[i]) + 1);
            } else {
                map.put(arr[i], 1);
            }
        }

        for (int i = 0; i < map.size(); i++) {
            if (map.get(arr[i]) == 1) {
                res.add(arr[i]);
            }
        }

        return res;
    }
}