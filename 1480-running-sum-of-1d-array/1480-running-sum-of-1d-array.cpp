class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            arr[i] = sum+nums[i];
            sum += nums[i];
        }

        return arr;
        
    }
};