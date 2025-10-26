class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        triangle.push_back({1});
        for (int i = 1; i < numRows; i++) {
            vector<int> prevRow = triangle.back();
            vector<int> row(i + 1, 1);
            for (int j = 1; j < i; j++) {
                row[j] = prevRow[j - 1] + prevRow[j];
            }
            triangle.push_back(row);
        }
        return triangle;
    }
};
