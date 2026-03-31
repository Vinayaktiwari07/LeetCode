class Solution {
public:
    int countCommas(int n) {
        string s = to_string(n);
        int size = s.size();
        int count = 0;

         // 1 comma (1000 → 999999)
        if (n >= 1000) {
            long long upper = min((long long)n, 999999LL);
            count += (upper - 1000 + 1) * 1;
        }

        // 2 commas (1000000 → 999999999)
        if (n >= 1000000) {
            long long upper = min((long long)n, 999999999LL);
            count += (upper - 1000000 + 1) * 2;
        }

        // 3 commas (1000000000 → 999999999999)
        if (n >= 1000000000) {
            long long upper = min((long long)n, 999999999999LL);
            count += (upper - 1000000000LL + 1) * 3;
        }

        // 4 commas (>= 10^12)
        if (n >= 1000000000000LL) {
            count += ((long long)n - 1000000000000LL + 1) * 4;
        }

        return (int)count;

    }
};