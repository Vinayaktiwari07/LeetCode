class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int ans = INT_MAX;

        while(l <= r){
            for(int i=0; i<=n-l; i++){
                int sum = 0;
                for(int k=i; k<i+l; k++){
                    sum += nums[k];
                }
                if (sum > 0) {
                    ans = min(ans, sum);
                }
            }
            l++;
        }

        return (ans == INT_MAX) ? -1 : ans;
    }
};