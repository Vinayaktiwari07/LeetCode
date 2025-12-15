class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int m = nums.size();
        vector<int> arr;
        int j = 0;
        int k = n;
        for(int i=0; i<m; i++){
            if(i%2==0){
                // nums[i] = nums[j];
                arr.push_back(nums[j]);
                j++;
            }
            else{
                // nums[i] = nums[k];
                arr.push_back(nums[k]);
                k++;
            }
        }
        return arr;
    }
};