class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
        int n = nums.size();
        vector<int> zeros(n + 1, 0);;
        vector<int> ones(n + 1, 0);
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                ones[i + 1] = ones[i];
                zeros[i + 1] = zeros[i] + 1;
            } else if (nums[i] == 1) {
                ones[i + 1] = ones[i] + 1;
                zeros[i + 1] = zeros[i];
            }
        }
        vector<int> result;
        int maxDivisionScore = -1;
        for (int i = 0; i < nums.size() + 1; i++) {
            int divisionScore = zeros[i] + (ones.back() - ones[i]);
            if (divisionScore > maxDivisionScore) {
                maxDivisionScore = divisionScore;
                result.clear();
                result.push_back(i);
            } else if (divisionScore == maxDivisionScore) {
                result.push_back(i);
            }
        }
        return result;
    }
};
