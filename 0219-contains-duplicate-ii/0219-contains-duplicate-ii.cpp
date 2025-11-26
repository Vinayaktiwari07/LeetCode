class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int  n = nums.size();

        unordered_map<int, int> mp;
        for(int i=0; i<n; i++){
            if(mp.find(nums[i]) != mp.end()){
                if(i-mp[nums[i]] <= k){
                    return true;
                }
            }

            mp[nums[i]] = i;
        } 

        return false;
        // bool flag = false;
        // for(int i=0; i<n; i++){
        //     for(int j =i+1; j<n; j++){
        //         if(nums[i] == nums[j] && abs(j-i <= k)){
        //             flag = true;
        //         }
        //     }
        // }
        // return flag;
    }
};