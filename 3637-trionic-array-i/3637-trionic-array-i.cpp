class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return false;

        int p = -1;
        int q = -1;

        //Find end of first increasing sequence (p)
        for (int i = 0; i < n - 1; i++) {
            if (nums[i + 1] > nums[i]) {
                p = i + 1;        // keep extending increasing
            } else {
                break;
            }
        }

        // must have at least one increase
        if (p <= 0) return false;

        //Find end of decreasing sequence (q)
        for (int i = p; i < n - 1; i++) {
            if (nums[i + 1] < nums[i]) {
                q = i + 1;        // keep extending decreasing
            } else {
                break;
            }
        }

        // must have at least one decrease and room for 3rd part
        if (q <= p || q >= n - 1) return false;

        //Check final increasing sequence
        for (int i = q; i < n - 1; i++) {
            if (nums[i + 1] <= nums[i]) {
                return false;
            }
        }

        return true;


    }
};