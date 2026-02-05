class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();

        vector<int> arr(n);
        for(int i=0; i<n; i++){
            int idx = nums[i];
            int idxn = (i+idx)%n;
            if (idxn < 0) idxn += n;
            arr[i] = nums[idxn];
        }

        return arr;
    }
};