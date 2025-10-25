class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        bitset<100> seen;
        vector<int> repeat;
        for (int num : nums) {
            if (seen[num] == 0) {
                seen[num] = 1;
            } else {
                repeat.push_back(num);
            }
        }
        return repeat;
    }
};
