class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        int min_element_index = min_element(nums.begin(), nums.end()) - nums.begin();
        int max_element_index = max_element(nums.begin(), nums.end()) - nums.begin();

        int max_index = max(min_element_index, max_element_index);
        int min_index = min(min_element_index, max_element_index);

        int front = max_index + 1;
        int back = n - min_index;
        int both = min_index + 1 + (n - max_index);

        return min({front, back, both});
        
    }
};