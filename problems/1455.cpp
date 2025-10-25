class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        string word = "";
        int count = 1;
        for (char c : sentence) {
            if (c == ' ') {
                word = "";
                count++;
            } else {
                word += c;
            }
            if (word == searchWord) {
                return count;
            }
        }
        return -1;
    }
};
