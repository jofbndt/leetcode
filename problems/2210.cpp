class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for (int x = 1; x < n - 1; x++) {
            if (nums[x - 1] == nums[x]) {
                continue;
            }
            int i = x - 1;
            while (i >= 0 && nums[i] == nums[x]) {
                i--;
            }
            int j = x + 1;
            while (j < n && nums[j] == nums[x]) {
                j++;
            }
            if (i >= 0 && j < n) {
                if (nums[i] < nums[x] && nums[j] < nums[x]) {
                    count++;
                } else if (nums[i] > nums[x] && nums[j] > nums[x]) {
                    count++;
                }
            }
        }
        return count;
    }
};
