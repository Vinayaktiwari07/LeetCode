class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size();
        string str = "";
        int count = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '(') {
                if(count > 0) {
                    str = str + s[i];
                }
                count++;
            }
            else { // s[i] == ')'
                if(count > 1) {
                    str = str + s[i];
                }
                count--;
            }

            
        }

        return str;
    }
};