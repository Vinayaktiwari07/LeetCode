class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n = s.size();

        int l = 0;
        int h = n-1;

        while(l<h){
            if(isalpha(s[l])&& isalpha(s[h])){
                swap(s[l], s[h]);
                l++;
                h--;
            }
            else if(!isalpha(s[l])){
                l++;
            }
            else{
                h--;
            }
        }
        return s;
    }
};