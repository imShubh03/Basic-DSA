import java.util.ArrayList;
import java.util.Map;
import java.util.Scanner;
import java.util.TreeMap;

public class SortByFrequency {

    public static ArrayList<Integer> sortByFrequency(int[] arr) {
        ArrayList<Integer> list = new ArrayList<>();

        Map<Integer, Integer> map = new TreeMap<>();

        for (int i = 0; i < arr.length; i++) {
            if (map.containsKey(arr[i])) {
                map.put(arr[i], map.get(arr[i]) + 1);
            } else {
                map.put(arr[i], 1);
            }
        }

        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
            int frequency = entry.getValue();
            while (frequency-- > 0) {
                list.add(entry.getKey());

            }
        }

        return list;

    }

    public static void main(String[] args) {
        int n = 7;
        int[] arr = new int[n];
        Scanner sc = new Scanner(System.in);

        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.println(sortByFrequency(arr));

        sc.close();

    }
}
