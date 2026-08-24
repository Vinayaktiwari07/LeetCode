class Solution {
public:
    bool isPalindrome(const string &s) {
        return equal(s.begin(), s.begin() + s.size()/2, s.rbegin());
    }

    bool isPalindromic(string s) {
        int n = s.size();
        string str = "";

        for(int i=0; i<n; i++){
            char ch = s[i];
            int ascii = (int)ch;
            for (int j = 7; j >= 0; j--) {
                str += ((ascii >> j) & 1) + '0';
            }
        }

        return (isPalindrome(str));
        
    }
};