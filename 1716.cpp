class Solution {
public:
    int totalMoney(int n) {
        int res = 0;
        int weekStart = 1;
        int dayCount = 0;
        
        for (int i = 1; i <= n; i++) {
            res += weekStart + dayCount;
            dayCount++;
            if (dayCount == 7) {
                weekStart++;
                dayCount = 0;
            }
        }
        
        return res;
    }
};
