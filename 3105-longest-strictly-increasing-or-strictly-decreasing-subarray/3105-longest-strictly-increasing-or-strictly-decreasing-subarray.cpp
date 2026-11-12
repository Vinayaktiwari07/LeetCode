class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();

        int resultInc = 1;
        int resultDec = 1;

        for(int i = 0; i < n; i++) {
            int inc = 1;

            for(int j = i; j < n - 1; j++) {
                if(nums[j + 1] > nums[j]) {
                    inc++;
                }
                else {
                    break;
                }
            }

            resultInc = max(resultInc, inc);
        }

        for(int i = 0; i < n; i++) {
            int dec = 1;

            for(int j = i; j < n - 1; j++) {
                if(nums[j + 1] < nums[j]) {
                    dec++;
                }
                else {
                    break;
                }
            }

            resultDec = max(resultDec, dec);
        }

        return max(resultInc, resultDec);
    }
};