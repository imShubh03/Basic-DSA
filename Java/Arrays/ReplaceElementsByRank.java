import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Scanner;

public class ReplaceElementsByRank {

    public static ArrayList<Integer> replaceByRank(int[] arr) {

        ArrayList<Integer> ans = new ArrayList<>();

        HashMap<Integer, Integer> map = new HashMap<>();

        int[] clone = new int[arr.length];
        for (int i = 0; i < clone.length; i++) {
            clone[i] = arr[i];
        }

        Arrays.sort(clone);

        int temp = 1;
        for (int i = 0; i < clone.length; i++) {
            if (map.get(clone[i]) == null) {
                map.put(clone[i], temp);
                temp++;
            }
        }

        for (int i = 0; i < clone.length; i++) {
            ans.add(map.get(arr[i]));
        }

        return ans;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = 5;

        int arr[] = new int[n];

        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.println(replaceByRank(arr));

        sc.close();
    }

}
