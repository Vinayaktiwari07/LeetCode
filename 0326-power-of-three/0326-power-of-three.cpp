class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n < 0) return false;
        long long result = 1;

        for(int i=0; i<20; i++){
            if(result == n) return true;
            else if(result > n) return false;

            result *= 3;
        }
        return false;
    }
};