class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> result;
        int carry = 0;
        int i = num.size() - 1;
        while (i >= 0 || k > 0 || carry > 0) {
            int x = 0;
            if (i >= 0) {
                x = num[i];
            }
            int y = k % 10;
            int sum = x + y + carry;
            result.push_back(sum % 10);
            carry = sum / 10;
            i--;
            k /= 10;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};

