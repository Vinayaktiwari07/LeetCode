class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string ans = "";
        if(sum > (num*9)){
            return ans;
        }

        while(num>0){
            int temp = min(9, sum);
            ans.push_back('0' + temp);
            sum = sum - temp;
            num--;
        }

        return ans;
    }
};