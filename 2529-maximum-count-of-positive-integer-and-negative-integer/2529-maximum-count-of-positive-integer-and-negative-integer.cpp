class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();

        int start = 0;
        int end = n-1;
        int negidx = 0;
        int posidx = 0;

        start = 0;
        end = n - 1;
        int firstNonNeg = n;

        while(start <= end){
            int mid = start + (end-start)/2;
            if(nums[mid] < 0){
                start = mid + 1;
            } else {
                firstNonNeg = mid;
                end = mid - 1;
            }
        }
        negidx = firstNonNeg;

        start = 0;
        end = n - 1;
        int firstPos = n;

        while(start <= end){
            int mid = start + (end-start)/2;
            if(nums[mid] <= 0){
                start = mid + 1;
            } else {
                firstPos = mid;
                end = mid - 1; 
            }
        }
        posidx = n - firstPos; 

        if(posidx >= negidx){
            return posidx;
        }
        else{
            return negidx;
        }
        
    }
};