class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();

        vector<vector<int>> ans;
        vector<int> v1, v2;

        for(int i=0; i<n1; i++){
            bool found = false;
            for(int j=0; j<n2; j++){
                if(nums1[i] == nums2[j]){
                    found = true;
                    break;
                }
            }
            // if(!found){
            //     v1.push_back(nums1[i]);
            // }
            if (!found && find(v1.begin(), v1.end(), nums1[i]) == v1.end()) {
                v1.push_back(nums1[i]);
            }
        }

        for(int i=0; i<n2; i++){
            bool found = false;
            for(int j=0; j<n1; j++){
                if(nums2[i] == nums1[j]){
                    found = true;
                    break;
                }
            }
            // if(!found){
            //     v2.push_back(nums2[i]);
            // }
            if (!found && find(v2.begin(), v2.end(), nums2[i]) == v2.end()) {
                v2.push_back(nums2[i]);
            }
        }

        ans.push_back(v1);
        ans.push_back(v2);

        return ans;
    }
};