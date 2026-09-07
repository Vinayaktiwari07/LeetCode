class Solution {
public: 
     set<vector<int>>st;
     void solve(int index,vector<int>&nums)
     {
         if(index==nums.size())
         {
            st.insert(nums);
            return ;

         }
         for(int i=index;i<nums.size();i++)
         {
            swap(nums[index],nums[i]);
            solve(index+1,nums);
            swap(nums[index],nums[i]);
         }


     }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        solve(0,nums);
        for(auto it:st)
        {
            ans.push_back(it);

        }
        return ans;
        
    }
};