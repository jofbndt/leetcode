class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int> freqs;
        for (int num : arr) {
            freqs[num]++;
        }
        vector<int> counts;
        for (auto& [num, freq] : freqs) {
            counts.push_back(freq);
        }
        sort(counts.rbegin(), counts.rend());
        int removed = 0;
        int set = 0;
        int half = arr.size() / 2;
        for (int count : counts) {
            if (removed >= half) {
                break;
            }
            removed += count;
            set++;
        }
        return set;
    }
};
