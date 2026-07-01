class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for (int num : nums) {
            s.insert(num);
        }
        int longest = 0;
        for (int num : nums) {
            if (s.find(num - 1) == s.end()) {
                int currNum = num;
                int currStreak = 1;

                while (s.find(currNum + 1) != s.end()) {
                    currNum += 1;
                    currStreak += 1;
                }
                longest = max(longest, currStreak);
            }
        }
        return longest;
    }
};
