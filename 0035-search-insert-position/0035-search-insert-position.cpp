class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s = 0; 
        int e = nums.size()-1;
        int idx = -1;

        while(s<=e){
            int mid = s + (e-s)/2;
            if(nums[mid] == target){
                // idx = mid;
                // break;
                return mid;
            }
            if(nums[mid] < target){
                // idx = mid + 1;
                s = mid+1;
            }
            else{
                e = mid-1;
            }

        }
        return s;
    }
};