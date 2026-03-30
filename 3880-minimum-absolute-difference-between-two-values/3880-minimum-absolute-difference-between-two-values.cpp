class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int n = nums.size();
        int diff = 0;
        int ans = INT_MAX;
        for(int i=0; i<n; i++){
            if(nums[i] == 1){
                for(int j=0; j<n; j++){
                    if(nums[j] == 2){
                        diff = abs(i-j);
                        ans = min(ans, diff);
                    }
                }
            }
        }
        if(ans == INT_MAX){
            return -1;
        }
        else{
            return ans;
        }
    }
};