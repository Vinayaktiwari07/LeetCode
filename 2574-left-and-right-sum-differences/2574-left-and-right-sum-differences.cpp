class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftSum(n);
        vector<int> rightSum(n);
        vector<int> ans(n);

        int sum1 = 0;
        for(int i=0; i<n; i++){
            leftSum[i] = sum1;
            sum1 += nums[i];
        }

        int sum2 = 0;
        for(int i=n-1; i>=0; i--){
            rightSum[i] = sum2;
            sum2 += nums[i];
        }

        for(int i=0; i<n; i++){
            ans[i] = (abs(leftSum[i] - rightSum[i]));
        }

        return ans;
    }
};