class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        int ans = -1;

        for (int mid = 0; mid < n; mid++) {
            int prev = 0;
            int nxt = 0;

            for (int i = 0; i < mid; i++) {
                prev += nums[i];
            }
            for (int i = mid + 1; i < n; i++) {
                nxt += nums[i];
            }

            if (prev == nxt) {
                ans = mid;
                break;
            }
        }

        return ans;
    }
};