class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> rows[9];
        unordered_set<char> cols[9];
        unordered_set<char> boxes[9];

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char current = board[i][j];
                if (current == '.') {
                    continue;
                }
                int index = (i / 3) * 3 + (j / 3);
                if (rows[i].find(current) != rows[i].end() ||
                    cols[j].find(current) != cols[j].end() ||
                    boxes[index].find(current) != boxes[index].end()) {
                    return false;
                }
                rows[i].insert(current);
                cols[j].insert(current);
                boxes[index].insert(current);
            }
        }
        return true;
    }
};
