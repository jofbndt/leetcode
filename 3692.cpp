class Solution {
public:
    string majorityFrequencyGroup(string s) {
        unordered_map<char, int> freqs;
        for (char c: s) {
            freqs[c]++;
        }
        unordered_map<int, string> groupSizes;
        for (auto& [c, freq]: freqs) {
            groupSizes[freq] += c;
        }
        string majorityGroup = "";
        int majorityFreq = 0;
        for (auto& [freq, group]: groupSizes) {
            if (group.size() > majorityGroup.size()) {
                majorityGroup = group;
                majorityFreq = freq;
            } else if (group.size() == majorityGroup.size() && freq > majorityFreq) {
                majorityGroup = group;
                majorityFreq = freq;
            }
        }
        return majorityGroup;
    }
};
