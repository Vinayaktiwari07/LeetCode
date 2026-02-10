class Solution {
public:
    string reverseByType(string s) {
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

        int i=0;
        int j=n-1;
        while(i<j){
            if(!isalpha(s[i]) && !isalpha(s[j])){
                swap(s[i], s[j]);
                i++;
                j--;
            }
            else if(isalpha(s[i])){
                i++;
            }
            else{
                j--;
            }
        }

        return s;
        
    }
};