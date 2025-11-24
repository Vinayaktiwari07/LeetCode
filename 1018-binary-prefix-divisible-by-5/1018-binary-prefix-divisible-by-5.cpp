class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int n = nums.size();

        vector<int> arr;
        vector<bool> ans;
        int mod = 0;

        for(int i=0; i<n; i++){
            arr.push_back(nums[i]);

            mod = (mod * 2 + nums[i]) % 5;
            if(mod == 0){
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }

        }
        return ans;
    }
};