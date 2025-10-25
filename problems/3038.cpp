class Solution {
public:
    int maxOperations(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        int prevScore = -1;

        for (int i = 0; i + 1 < n; i += 2) {
            int curScore = nums[i] + nums[i+1];

            if (prevScore == -1) {
                prevScore = curScore;
                count++;
            } else if (curScore == prevScore) {
                count++;
            } else {
                break;
            }
        }
        
        return count;
    }
};
