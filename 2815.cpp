class Solution {
public:
    int maxSum(vector<int>& nums) {
        vector<int> max1(10, 0);
        vector<int> max2(10, 0);
        int maxSum = -1;
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int temp = num;
            int largestDigit = 0;
            while (temp != 0) {
                int curDigit = temp % 10;
                if (curDigit > largestDigit) {
                    largestDigit = curDigit;
                }
                temp /= 10;
            }
            if (num > max1[largestDigit]) {
                max2[largestDigit] = max1[largestDigit];
                max1[largestDigit] = num;
            } else if (num > max2[largestDigit]) {
                max2[largestDigit] = num;
            }
            if (max2[largestDigit] != 0) {
                int curSum = max1[largestDigit] + max2[largestDigit];
                if (curSum > maxSum) {
                    maxSum = curSum;
                }
            }
        }
        return maxSum;
    }
};
