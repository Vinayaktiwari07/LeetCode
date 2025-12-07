class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr;

        int i = 0;
        while (i < n) {
            if (nums[i] == 1) {
                int count = 0;

                // consecutive 1s count karo
                while (i < n && nums[i] == 1) {
                    count++;
                    i++;
                }

                arr.push_back(count);
            } else {
                i++; // 0 hai to aage badho
            }
        }

        if (arr.empty()) return 0; // agar koi 1 hi nahi tha

        int maxi = *max_element(arr.begin(), arr.end());
        return maxi;
    }
};