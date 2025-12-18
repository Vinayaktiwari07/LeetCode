class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int n = nums.size();

        int alicesum = 0;
        int bobsum = 0;

        for(int i=0; i<n; i++){
            if(nums[i]<10){
                alicesum += nums[i];
            }
            else{
                bobsum += nums[i];
            }
        }
        if(alicesum == bobsum){
            return false;
        }
        else{
            return true;
        }
    }
};