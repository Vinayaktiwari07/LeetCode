class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size();

        int sum = accumulate(nums.begin(), nums.end(),0);
        int sum1 = 0;
        for(int i=0; i<n; i++){
            int digitSum = 0;
            while(nums[i]>0){
                digitSum += nums[i] % 10;
                nums[i] /= 10; 
            }
            sum1 += digitSum;
        }

        return abs(sum-sum1);
    }
};