class Solution {
public:
    string addBinary(string a, string b) {
        int aIdx = a.size() - 1;
        int bIdx = b.size() - 1;
        int carryIn = 0;
        string result = "";
        while (aIdx >= 0 || bIdx >= 0 || carryIn == 1) {
            int aVal = 0;
            int bVal = 0;
            if (aIdx >= 0) {
                aVal = a[aIdx] - '0';
            }
            if (bIdx >= 0) {
                bVal = b[bIdx] - '0';
            }
            int sum = aVal + bVal + carryIn;
            carryIn = sum / 2;
            char c = sum % 2 + '0';
            result = c + result;
            --aIdx;
            --bIdx;
        }
        return result;
    }
};
