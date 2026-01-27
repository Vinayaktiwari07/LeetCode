class Solution {
public:
    int totalMoney(int n) {
        int sum = 0;
        int day = 1;

        for (int i = 1; i <= n; i++) {
            sum += day;
            day++;

            if (i % 7 == 0) {
                day = i / 7 + 1;
            }
        }

        return sum;
    }
};