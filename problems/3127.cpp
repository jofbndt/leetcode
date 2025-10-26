class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                int white = (grid[i][j] == 'W')
                          + (grid[i][j+1] == 'W')
                          + (grid[i+1][j] == 'W')
                          + (grid[i+1][j+1] == 'W');
                if (white >= 3 || white <= 1) {
                    return true;
                }
            }
        }
        return false;
    }
};
