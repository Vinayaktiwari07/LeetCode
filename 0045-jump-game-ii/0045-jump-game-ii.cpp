class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int jump = 0;
        int farthes = 0;
        for(int i=0; i<n-1; i++){
            jump = max(jump, i+nums[i]);

            if(i == farthes){
                count++;
                farthes = jump;
            }
        }
        return count;
    }
};