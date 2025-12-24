class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        int evenIdx = 0;
        int oddIdx = 1;

        for(int x : nums) {
            if(x % 2 == 0) {
                ans[evenIdx] = x;
                evenIdx += 2;
            } else {
                ans[oddIdx] = x;
                oddIdx += 2;
            }
        }
        return ans;
    }
};