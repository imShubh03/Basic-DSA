import java.util.LinkedHashSet;
import java.util.Set;

public class RemoveDuplicatesFromUnsorted {
    public static void main(String[] args) {
        int[] arr = { 2, 3, 1, 9, 3, 1, 3, 9 };
        System.out.println(removeDuplicates(arr));
    }

    public static Set<Integer> removeDuplicates(int[] arr) {
        Set<Integer> uniqueElements = new LinkedHashSet<>();
        for (int num : arr) {
            uniqueElements.add(num);
        }
        return uniqueElements;
    }
}
