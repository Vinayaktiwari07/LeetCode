class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i=0;i<n; i++){
            int sum = 0;
            for(int j=i; j<n; j++){
                sum += nums[j];
            }
            int avg = sum/(n-i);
            if(nums[i]>avg){
                count++;
            }
        }

        return count;
    }
};