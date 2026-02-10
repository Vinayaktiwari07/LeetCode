class Solution {
public:
    string finalString(string s) {
        int n = s.size();
        string str = "";

        for(int i=0; i<n; i++){
            if(s[i] == 'i'){
                reverse(str.begin(),str.end());
            }
            else{
                str += s[i];
            }
        }

        return str;
    }
};