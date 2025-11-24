class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        int left = 0;
        int right = n-1;

        int mini = INT_MAX;
        int maxi = 0;

        for(int i = left; i < n; i++){
            mini = min(mini, prices[i]);
            maxi = max(maxi, prices[i] - mini);
        }

        return maxi;


    }
};