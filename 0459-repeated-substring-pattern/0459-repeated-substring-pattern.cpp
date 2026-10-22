class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();

        for (int len = 1; len <= n / 2; len++) {
            string substr = s.substr(0, len);

            if (n % len != 0) {
                continue;
            }

            string temp = "";

            while (temp.size() < n) {
                temp += substr;
            }

            if (temp == s) {
                return true;
            }
        }

        return false;

    }
};