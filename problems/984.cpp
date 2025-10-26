class Solution {
public:
    string strWithout3a3b(int a, int b) {
        string result = "";
        int as = 0, bs = 0;
        while (a > 0 || b > 0) {
            if ((a > b && as < 2) || bs == 2) {
                result += 'a';
                a--;
                as++;
                bs = 0;
            } else {
                result += 'b';
                b--;
                bs++;
                as = 0;
            }
        }
        return result;
    }
};
