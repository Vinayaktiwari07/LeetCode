class Solution {
public:
    int minInsertions(string s) {
        int n = s.size();
        int ans = 0;   // final insertions count
        int open = 0;  // count of '(' not yet matched

        for(int i = 0; i < n; i++) {
            if(s[i] == '(') {
                open++;
            } else { // s[i] == ')'
                if(i+1 < n && s[i+1] == ')') {
                    i++; // consume both ')'
                } else {
                    ans++; // need one more ')'
                }

                if(open > 0) {
                    open--; // match with '('
                } else {
                    ans++; // need one '('
                }
            }
        }

        ans += open * 2; // each '(' needs two ')'
        return ans;
    }
};
