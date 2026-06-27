class Solution {
   public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        string ref = strs[0];
        for(int i = 0;i < ref.length();i++){
            char ch = ref[i];
            for(int j = 1;j<strs.size();j++){
                if(i == strs[j].length() || strs[j][i] != ch){
                    return ref.substr(0,i);
                }
            }
        }
        return ref;
    }
};