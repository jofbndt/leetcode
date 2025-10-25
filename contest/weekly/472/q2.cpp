class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n = nums.size();
        int longestLength = 0;
        for (int i = 0; i < n; i++) {
            int even = 0;
            int odd = 0;
            int length = 0;
            unordered_set<int> seen;
            for (int j = i; j < n; j++) {
                length++;
                if (!seen.contains(nums[j])) {
                     if (nums[j] % 2 == 0) {
                    even++;
                    } else {
                        odd++;
                    }   
                }
                seen.insert(nums[j]);
                if (even == odd && length > longestLength) {
                    longestLength = length;
                }
            }
        }
        return longestLength;
    }
};
