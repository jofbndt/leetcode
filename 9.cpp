class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        int ox = x;
        long long rx = 0;
        while (x != 0) {
            rx = rx * 10 + x % 10;
            x /= 10;
        }
        return ox == rx;
    }
};
