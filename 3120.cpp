class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<char> seen;
        int count = 0;
        for (char c : word) {
            if (seen.contains(tolower(c)) && seen.contains(toupper(c))) {
                continue;
            }
            if (c >= 'a') {
                if (seen.contains(toupper(c))) {
                    count++;
                }
            } else if (c <= 'Z') {
                if (seen.contains(tolower(c))) {
                    count++;
                }
            }
            seen.insert(c);
        }
        return count;
    }
};
