class Solution {
public:
    int reverse(int x) {
        long long rev = 0;
        int sign = (x<0) ? -1 : 1;

        int temp = llabs(x);

        while(temp>0){
            int digit = temp%10;
            rev = rev * 10 + digit;
            temp = temp/10;
        }

        rev = rev * sign;  // agr negative hoga to negative otherwise positive ke dega

        if(rev < INT_MIN || rev > INT_MAX) return 0;  // bhai ye 32 bit integer overflow check krega

        return int(rev);
        
    }
};