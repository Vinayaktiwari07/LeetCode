class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        const long long MOD = 1000000007LL;
        int n = nums.size();

        int count = 0;
        // for (int j = 0; j < n; j++) {
        //     int left = 0, right = 0;

        //     for (int i = 0; i < j; i++) {
        //         if (nums[i] == 2 * nums[j])
        //             left++;
        //     }

        //     for (int k = j + 1; k < n; k++) {
        //         if (nums[k] == 2 * nums[j])
        //             right++;
        //     }

        //     count += left * right;
        // }

        // return count;
        unordered_map<int, int> left;
        unordered_map<int, int> right;
        for(int i=0; i<n; i++){
            right[nums[i]]++;
        }

        long long ans = 0;
        for(int j=0; j<n;j++){
            right[nums[j]]--;
            int needed = 2 * nums[j];
            long long L = 0, R = 0;
            if (left.count(needed)) L = left[needed];
            if (right.count(needed)) R = right[needed];
            ans = (ans + L * R) % MOD;
            left[nums[j]]++;
        }

        return (int)ans;

        

    }
};