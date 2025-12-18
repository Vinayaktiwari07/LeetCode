class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int sum = accumulate(nums.begin(), nums.end(),0);
        int maxi = *max_element(nums.begin(), nums.end());

        return maxi*n - sum;
    }
};