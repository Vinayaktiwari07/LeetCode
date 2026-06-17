class Solution {
public:
    char processStr(string s, long long k) {
        int n = s.size();

        vector<long long> len(n + 1, 0);

        for (int i = 0; i < n; i++) {
            len[i + 1] = len[i];

            if ('a' <= s[i] && s[i] <= 'z')
                len[i + 1]++;
            else if (s[i] == '*') {
                if (len[i + 1] > 0)
                    len[i + 1]--;
            }
            else if (s[i] == '#')
                len[i + 1] = min(len[i + 1] * 2, (long long)1e15);
        }

        if (k >= len[n]) return '.';

        for (int i = n - 1; i >= 0; i--) {

            if ('a' <= s[i] && s[i] <= 'z') {
                if (k == len[i])
                    return s[i];
            }
            else if (s[i] == '#') {
                if (len[i] > 0)
                    k %= len[i];
            }
            else if (s[i] == '%') {
                if (len[i] > 0)
                    k = len[i] - 1 - k;
            }
        }

        return '.';
    }
};