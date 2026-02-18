class Solution {
public:
    int myAtoi(string s) {
        int num = 0, i = 0, sign = 1; // 1 indicate +ve

        // ye loop tb tk chlega jb tk whitespace end na ho jaye
        while(s[i] == ' '){
            i++;
        }

        // ye check krega ki string negative int store kiya hai ya positive
        if(i < s.size() && (s[i] == '-' || s[i] == '+')){
            sign = s[i] == '+' ? 1 : -1;
            ++i;
        }

        // ye tb tk chlega jb tk integer value milega or ye bhi check krega ki wo integer out of bound to nhi ja rha hai n.
        while(i<s.size() && isdigit(s[i])){
            if(num > INT_MAX / 10 || (num == INT_MAX / 10 && s[i] > '7')){
                return sign == -1 ? INT_MIN : INT_MAX;
            }

            num = num * 10 + (s[i] - '0');
            ++i;
        }
        return num*sign;

    }
};