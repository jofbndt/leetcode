class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> seen;
        for (int num: nums) {
            seen.insert(num);
        }
        int result = k;
        while(seen.contains(result)) {
            result += k;
        }
        return result;
    }
};
