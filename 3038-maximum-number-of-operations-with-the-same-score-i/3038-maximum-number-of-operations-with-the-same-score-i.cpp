class Solution {
public:
    int maxOperations(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        int sum = nums[0]+nums[1];
        for(int i=0; i<n; i += 2){
            int sum1 = nums[i]+nums[i+1];
            if(sum1 == sum){
                sum = sum1;
                count++;
            }
            else{
                break;
            }
        }

        return count;
    }
};