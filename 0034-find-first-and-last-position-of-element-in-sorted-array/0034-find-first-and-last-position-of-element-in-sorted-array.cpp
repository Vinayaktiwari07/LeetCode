class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s=0;
        int e = nums.size() - 1;

        int f_idx = -1;

        while(s <= e){
            int mid = s + (e-s)/2;
            if(nums[mid] == target){
                f_idx = mid;
                e = mid-1;
            }
            else if(nums[mid] < target){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }

        s = 0;
        e = nums.size()-1;
        int l_idx = -1;
        while(s <= e){
            int mid = s + (e-s)/2;
            if(nums[mid] == target){
                l_idx = mid;
                s = mid+1;
            }
            else if(nums[mid] < target){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }

        return {f_idx , l_idx};
        return {};
    }
};