class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        // Possibility 1: Change first 2 elements
        int temp1 = nums[n-1] - nums[2];

        // Possibility 2: Change first and last elements
        int temp2 = nums[n-2] - nums[1];

        // Possibility 3: Change last 2 elements
        int temp3 = nums[n-3] - nums[0];

        return min({temp1, temp2, temp3});
       
    }
};