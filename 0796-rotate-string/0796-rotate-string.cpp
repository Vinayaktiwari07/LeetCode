class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();
        if (n != goal.size()) return false;

        for (int i = 0; i < n; i++) {
            if (s == goal) {
                return true;
            }
            // Rotate left by 1 each time
            s = s.substr(1) + s[0];
        }
        return false;
    }
};