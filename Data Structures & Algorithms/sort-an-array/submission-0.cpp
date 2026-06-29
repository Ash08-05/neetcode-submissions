class Solution {
private:
    void merge(vector<int>& nums, int left, int mid, int right, vector<int>& temp) {
        int i = left;      // Starting index for left subarray
        int j = mid + 1;   // Starting index for right subarray
        int k = left;      // Starting index for temp array

        // Copy elements into temp in sorted order
        while (i <= mid && j <= right) {
            if (nums[i] <= nums[j]) {
                temp[k++] = nums[i++];
            } else {
                temp[k++] = nums[j++];
            }
        }

        // Copy the remaining elements of left subarray, if any
        while (i <= mid) {
            temp[k++] = nums[i++];
        }

        // Copy the remaining elements of right subarray, if any
        while (j <= right) {
            temp[k++] = nums[j++];
        }

        // Copy the sorted elements back into the original nums array
        for (int index = left; index <= right; index++) {
            nums[index] = temp[index];
        }
    }

    void mergeSort(vector<int>& nums, int left, int right, vector<int>& temp) {
        if (left >= right) return;

        int mid = left + (right - left) / 2;

        mergeSort(nums, left, mid, temp);
        mergeSort(nums, mid + 1, right, temp);
        merge(nums, left, mid, right, temp);
    }

public:
    vector<int> sortArray(vector<int>& nums) {
        // Allocate the temporary array once to optimize memory allocation overhead
        vector<int> temp(nums.size());
        mergeSort(nums, 0, nums.size() - 1, temp);
        return nums;
    }
};