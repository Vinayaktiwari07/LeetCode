class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int n = nums.size();

        int value = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(nums[j] == original){
                    value = 2 * original;
                    original = value;
                }
                else{
                    value = original;
                }
            }
        }

        return value;
    }
};