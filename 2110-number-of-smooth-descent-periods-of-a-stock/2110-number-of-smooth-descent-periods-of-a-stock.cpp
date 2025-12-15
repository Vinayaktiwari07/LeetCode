class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        int n = prices.size();
        long long count = 1;
        long long currLen = 1;
        for(int i=1; i<n; i++){
            if(prices[i-1] - prices[i] == 1){
                currLen++;
            }else{
                currLen = 1;
            }
            count += currLen;
        }

        return count;
    }
};