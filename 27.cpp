class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int move = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[move++] = nums[i];
            }
        }
        return move;
    }
};
