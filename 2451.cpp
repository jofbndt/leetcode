class Solution {
public:
    string oddString(vector<string>& words) {
        int n = words[0].size();
        vector<int> sameDiff;
        for (int j = 1; j < n; j++) {
            int charDiff0 = words[0][j - 1] - words[0][j];
            int charDiff1 = words[1][j - 1] - words[1][j];
            int charDiff2 = words[2][j - 1] - words[2][j];
            if (charDiff1 == charDiff2 && charDiff0 != charDiff1) {
                return words[0];
            }
            sameDiff.push_back(charDiff0);
        }
        for (int i = 1; i < words.size(); i++) {
            for (int j = 1; j < n; j++) {
                int charDiffI = words[i][j - 1] - words[i][j];
                if (sameDiff[j - 1] != charDiffI) {
                    return words[i];
                }
            }
        }
        return "";
    }
};
