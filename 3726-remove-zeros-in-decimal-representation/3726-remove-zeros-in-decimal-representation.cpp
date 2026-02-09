class Solution {
public:
    long long removeZeros(long long n) {
        string str = "";

        string s = to_string(n);

        for(int i=0; i<s.size(); i++){
            if(s[i] != '0'){
                str.push_back(s[i]);
            }
        }

        long long m = stoll(str);;

        return m;
    }
};