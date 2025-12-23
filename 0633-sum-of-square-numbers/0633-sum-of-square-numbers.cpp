class Solution {
public:
    bool judgeSquareSum(int c) {
        // if(c == 0) return true;
        // for(long long i=0; i<=c; i++){
        //     for(long long j=1; j<=c; j++){
        //         if((i*i) + (j*j) == c){
        //             // flag = true;
        //             // break;
        //             return true;
        //         }
        //     }
        // }
        // return false;
        // // return flag;
        long long left = 0;
        long long right = sqrt(c);

        while (left <= right) {
            long long sum = left * left + right * right;

            if (sum == c) return true;
            else if (sum < c) left++;
            else right--;
        }
        return false;
    }
};