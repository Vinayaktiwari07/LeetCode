class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        long long firstmax = INT_MIN, secondmax = INT_MIN;
        long long firstmin = INT_MAX, secondmin = INT_MAX;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > firstmax) {
                secondmax = firstmax;
                firstmax = nums[i];
            } else if (nums[i] > secondmax) {
                secondmax = nums[i];
            }

            if (nums[i] < firstmin) {
                secondmin = firstmin;
                firstmin = nums[i];
            } else if (nums[i] < secondmin) {
                secondmin = nums[i];
            }
        }


        return ((firstmax*secondmax)-(firstmin*secondmin));
    }
};