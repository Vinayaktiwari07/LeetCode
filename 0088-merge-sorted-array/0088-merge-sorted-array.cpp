class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> arr;
        int k = m+n;
        
        for(int i=m, j=0; i<k&&j<n; i++,j++){
            nums1[i] = nums2[j];
        }
        sort(nums1.begin(),nums1.end());
        for(int i=0; i<k; i++){
            cout << nums1[i] <<",";
        }

    }
};