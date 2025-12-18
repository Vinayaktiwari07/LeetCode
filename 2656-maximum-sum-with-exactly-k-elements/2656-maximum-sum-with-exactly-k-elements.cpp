class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int n = nums.size();
        int maxi = *max_element(nums.begin(), nums.end());
        int sum = maxi;
        for(int i=1; i<k; i++){
            maxi = maxi+1;
            sum += maxi;
        }

        return sum;
    }
};