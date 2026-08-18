class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int m = nums1.length;
        int n = nums2.length;
        int[] merged = new int[m + n];

        int index = 0;
        for (int i = 0; i < m; i++) {
            merged[index] = nums1[i];
            index++;
        }
        for (int i = 0; i < n; i++) {
            merged[index] = nums2[i];
            index++;
        }
        Arrays.sort(merged);
        int length = merged.length;
        if (length % 2 != 0) {
            return merged[length / 2];
        } else {
            int rightMiddle = length / 2;
            int leftMiddle = rightMiddle - 1;
            return (merged[leftMiddle] + merged[rightMiddle]) / 2.0;
        }
    }
}
