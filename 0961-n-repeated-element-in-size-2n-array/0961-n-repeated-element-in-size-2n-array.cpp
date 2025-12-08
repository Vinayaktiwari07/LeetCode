class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int l = nums.size();
        int n = l/2;

        int ans = 0;
        for(int i=0; i<l; i++){
            for(int j=i+1; j<l; j++){
                if(nums[i]==nums[j])
                ans = nums[i];
            }
        }
        return ans;
    }
};