class Solution {
public:
    int countPairs(vector<int> &nums, int left, int mid, int right){
        int j = mid+1;
        int count = 0;
        for(int i=left; i<=mid; i++){
            while(j <= right && (long long)nums[i] > 2LL*nums[j]){
                j++;
            }
            count += (j-(mid+1));
        }
        return count;
    }
    void merge(vector<int> &nums, int left, int mid, int right){
        vector<int> temp;
        int i=left, j=mid+1;

        while(i<=mid && j<=right){
            if(nums[i] <= nums[j]){
                temp.push_back(nums[i++]);
            }else{
                temp.push_back(nums[j++]);
            }
        }
        while(i<=mid){
            temp.push_back(nums[i++]);
        }
        while(j<=right){
            temp.push_back(nums[j++]);
        }
        for(int idx=left; idx<=right; idx++){
            nums[idx] = temp[idx-left];
        }
    }

    int mergeSortCount(vector<int> &nums, int left, int right){
        if(left >= right) return 0;

        int mid = left + (right-left)/2;
        int count = mergeSortCount(nums, left, mid);
        count += mergeSortCount(nums, mid+1, right);
        count += countPairs(nums, left, mid, right);
        merge(nums, left, mid, right);
        return count;
    }
    int reversePairs(vector<int>& nums) {
        int n = nums.size();
        return mergeSortCount(nums, 0, n-1);
    }
};