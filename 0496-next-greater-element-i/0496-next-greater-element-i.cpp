class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        vector<int> arr;

        for(int i = 0; i < n; i++){
            int ans = -1;
            bool found = false;

            for(int j = 0; j < m; j++){
                if(nums1[i] == nums2[j]){
                    found = true;
                }
                else if(found && nums2[j] > nums1[i]){
                    ans = nums2[j];
                    break;
                }
            }

            arr.push_back(ans);
        }

        return arr;
    }
};