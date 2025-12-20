class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        for(int i=k; i<=1000; i += k){
            bool flag = false;
            for(int j=0; j<n; j++){
                if(i == nums[j]){
                    flag = true;
                    break;
                }
            }
            if(flag == false){
                ans = i;
                break;
            }
        }

        return ans;
    }
};