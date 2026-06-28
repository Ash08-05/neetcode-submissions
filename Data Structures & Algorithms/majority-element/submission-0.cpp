class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        int target = nums.size() / 2;
        for(int num : nums){
            freq[num]++;
            if(freq[num] > target){
                return num;
            }
        }
        return -1;
    }
};