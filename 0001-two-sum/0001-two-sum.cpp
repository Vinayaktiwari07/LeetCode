class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;

        vector<int> ans(2);

        for(int i=0; i<nums.size(); i++){
            int toCheck = target-nums[i];

            if(mp.find(toCheck) != mp.end()){
                ans[0] = mp[toCheck];
                ans[1] = i;
            }
            else{
                mp[nums[i]]=i;
            }
        }
        return ans;
    }
    
    
};