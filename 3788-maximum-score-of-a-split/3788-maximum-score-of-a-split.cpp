class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        
    //    int n = nums.size();

    //    int s = 0;
    //    int e = n-1;
    //    long long maxi = LLONG_MIN;

    //    for(int i=0; i<n-1; i++){
    //     long long prefixSum = accumulate(nums.begin()+s, nums.begin()+i+1,0LL);
    //     int suffixMin = *min_element(nums.begin()+i+1, nums.begin()+e+1);
    //     long long ans = prefixSum - suffixMin;
    //     maxi = max(maxi, ans);
        
    //    } 
    //    return maxi;
        int n = nums.size();
        long long maxi = LLONG_MIN;

        
        vector<int> suffixMin(n);
        suffixMin[n - 1] = nums[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            suffixMin[i] = min(nums[i], suffixMin[i + 1]);
        }

        
        long long prefixSum = 0;

        for (int i = 0; i < n - 1; i++) {
            prefixSum += nums[i];
            long long score = prefixSum - suffixMin[i + 1];
            maxi = max(maxi, score);
        }

        return maxi;
    }
};