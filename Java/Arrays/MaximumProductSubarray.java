public class MaximumProductSubarray {
    public static void main(String[] args) {
        int[] arr = { 1, 2, 3, 4, 5, 0 };
        System.out.println("Brute Force Sol: " + maxProductSubarray(arr));

        System.out.println("Optimal Sol: " + optimal(arr));

    }

    // Brute force
    public static int maxProductSubarray(int[] arr) {
        int max = Integer.MIN_VALUE;

        for (int i = 0; i < arr.length; i++) {
            int product = 1;
            for (int j = i; j < arr.length; j++) {
                product *= arr[j];
                max = Math.max(max, product);
            }
        }

        return max;
    }

    public static int optimal(int[] arr) {
        int n = arr.length;
        int maxi = Integer.MIN_VALUE;
        int prefix = 1;
        int suffix = 1;
        for (int i = 0; i < n; i++) {
            if (prefix == 0)
                prefix = 1;
            if (suffix == 0)
                suffix = 1;

            prefix *= arr[i];
            suffix *= arr[n - i - 1];

            maxi = Math.max(maxi, Math.max(prefix, suffix));
        }

        return maxi;
    }
}
