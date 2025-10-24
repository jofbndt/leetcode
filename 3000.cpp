class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        long long maxDiagonal{0};
        long long maxDiagonalArea{0};
        for (vector<int> rectangle : dimensions) {
            long long length = rectangle[0];
            long long width = rectangle[1];
            long long curDiagonal = length * length + width * width;
            if (curDiagonal > maxDiagonal) {
                maxDiagonal = curDiagonal;
                maxDiagonalArea = length * width;
            } else if (curDiagonal == maxDiagonal) {
                maxDiagonalArea = max(maxDiagonalArea, length * width);
            }
        }
        return maxDiagonalArea;
    }
};
