class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;
        for (int l = 1; l <= n; l += 2) {
            for (int i = 0; i <= n - l; i++) {
                for (int j = 0; j < l; j++) {
                    sum += arr[i + j];
                }
            }
        }
        return sum;
    }
};
