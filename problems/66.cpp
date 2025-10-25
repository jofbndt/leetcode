class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carryIn = 1;
        int i = digits.size() - 1;
        while (i >= 0) {
            int sum = digits[i] + carryIn;
            digits[i] = sum % 10;
            carryIn = sum / 10;
            --i;
        }
        if (carryIn == 1) {
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};
