class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        vector<int> arr;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(nums1[i] == nums2[j]){
                    arr.push_back(nums1[i]);
                }
            }
        }

        // return arr;
        set<int> unique(arr.begin(), arr.end());
        vector<int> result(unique.begin(), unique.end());

        return result;

    }
};