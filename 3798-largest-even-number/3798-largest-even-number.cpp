class Solution {
public:
    string largestEven(string s) {
        int lastEven = -1;

        for (int i = s.size() - 1; i >= 0; i--) {
            if ((s[i] - '0') % 2 == 0) {
                lastEven = i;
                break;
            }
        }

        if (lastEven == -1) return "";

        return s.substr(0, lastEven + 1);
    }
};