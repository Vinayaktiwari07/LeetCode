class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();
        int maxi = *max_element(nums.begin(), nums.end());
        int idx = -1;
        for(int i=0; i<n; i++){
            if(nums[i] == maxi){
                idx = i;
                continue;
            }else if( (nums[i]*2) > maxi){
                return -1;
            }
        }

        return idx;
    }
};