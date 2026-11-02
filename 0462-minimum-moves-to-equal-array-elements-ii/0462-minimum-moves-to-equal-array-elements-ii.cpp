class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        // int sum = accumulate(nums.begin(), nums.end(),0);
        // int avg = sum/n;
        int median = nums[n/2];

        int ans = 0;
        for(int i=0; i<n; i++){
            int temp = abs(median-nums[i]);
            ans += temp;
        }

        return ans;
    }
};