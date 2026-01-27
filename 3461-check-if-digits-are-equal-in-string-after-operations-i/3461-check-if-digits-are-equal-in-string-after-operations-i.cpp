class Solution {
public:
    bool hasSameDigits(string s) {
        int n = s.size();

        while(n>2){
            string str = "";
            for(int i=0; i<n-1; i++){
                int d = (s[i] - '0' + s[i+1] - '0')%10;
                str += (d + '0');
            }
            s=str;
            n = s.size();
        }

        bool ans = false;
        if(s[0] == s[1]){
            ans = true;
        }
        else{
            ans = false;
        }

        return ans;
    }
};