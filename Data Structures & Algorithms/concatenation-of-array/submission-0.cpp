class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        int m = 2*n;
        vector<int> ans(m);
        for(int i = 0;i < n; i++){
            ans[i] = nums[i]; // fills 1st half
            ans[i+n] = nums[i]; // fills 2nd half
        }
        return ans;
    }
};