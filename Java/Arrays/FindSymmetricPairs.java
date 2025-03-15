import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;

public class FindSymmetricPairs {
    public static void main(String[] args) {

        int[][] arr = { { 1, 2 }, { 2, 1 }, { 3, 4 }, { 4, 5 }, { 5, 4 } };

        ArrayList<String> ans = findSymmetric(arr);

        System.out.println("Symmetric Pairs: " + ans);
    }

    public static ArrayList<String> findSymmetric(int[][] arr) {
        Map<Integer, Integer> map = new HashMap<>();

        ArrayList<String> res = new ArrayList<>();
        for (int i = 0; i < arr.length; i++) {
            int first = arr[i][0];
            int second = arr[i][1];

            if (map.get(second) != null && map.get(second) == first) {
                res.add("(" + first + "," + second + ")");
            } else {
                map.put(first, second);
            }
        }

        return res;

    }
}
