class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == nums[i-1]) return true;
        }
        return false;
    //    int n = nums.size();

    //     bool flag = false;
    //     for(int i =0; i<n; i++){
    //         for(int j=i+1; j<n; j++){
    //             if(nums[i] == nums[j]){
    //                 // flag = true;
    //                 return true;
    //             }
    //         }
    //     } 
    //     return false;
        // if(flag){
        //     return true;
        // }
        // else{
        //     return false;
        // }
    }
};