class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        // int n = nums1.size();
        // int m = nums2.size();
        
        // int ans = 0;
        // vector<int> arr;
        // for(int i=0; i<n; i++){
        //     for(int j=0; j<m; j++){
        //         if(nums1[i] == nums2[j]){
        //             return nums1[i];
        //         } 
        //     }
        // }
        // return -1;
        int i = 0, j = 0;
        while (i < (int)nums1.size() && j < (int)nums2.size()) {
            if (nums1[i] == nums2[j]) return nums1[i];
            else if (nums1[i] < nums2[j]) i++;
            else j++;
        }
        return -1;
    }
};