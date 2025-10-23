class Solution {
public:
    bool digitCount(string num) {
        unordered_map<int, int> freq;
        for (char digit : num) {
            freq[digit - '0']++;
        }
        for (int i = 0; i < num.size(); i++) {
            if ((num[i] - '0') != freq[i]) {
                return false;
            }
        }
        return true;
    }
};
