class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        int n = nums.size();

        vector<long long> suffix(n + 1, 1);

        for(int i = n - 1; i >= 0; i--){
            if(suffix[i + 1] > 1e14 / nums[i]) suffix[i] = 1e14;
            else suffix[i] = suffix[i + 1] * nums[i];
        }

        long long sum = 0;
        int idx = -1;

        for(int i = 0; i < n; i++){

            long long product = suffix[i + 1];

            if(sum == product){
                idx = i;
                break;
            }

            sum += nums[i];
        }

        return idx;
    }
};