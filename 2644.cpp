class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int maxDivScore = -1;
        int maxDiv = INT_MAX;
        for (int i = 0; i < divisors.size(); i++) {
            int divScore = 0;
            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] % divisors[i] == 0) {
                    divScore++;
                }
            }
            if (divScore > maxDivScore) {
                maxDivScore = divScore;
                maxDiv = divisors[i];
            } else if (divScore == maxDivScore && divisors[i] < maxDiv) {
                maxDiv = divisors[i];
            }
        }
        return maxDiv;
    }
};
