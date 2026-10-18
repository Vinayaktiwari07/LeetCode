class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <= 0) return false;
        long long temp = 1;
        while(temp <= n){
            if(temp == n) return true;
            temp *= 4;
        }
        return false;
    }
};