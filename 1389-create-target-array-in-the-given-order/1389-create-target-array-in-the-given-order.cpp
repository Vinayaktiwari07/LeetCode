class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n = nums.size();
        vector<int> arr;

        for(int i=0;i<n; i++){
            int idx = index[i];
            arr.insert(arr.begin() + idx, nums[i]);
        }

        return arr;
    }
};