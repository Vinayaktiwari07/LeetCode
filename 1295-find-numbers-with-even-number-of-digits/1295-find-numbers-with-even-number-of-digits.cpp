class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();

        int count = 0;

        for(int i=0; i<n; i++){
            int temp = nums[i];
            int count1 = 0;
            while (temp > 0) {
                temp /= 10;
                count1++;
            }
            if(count1%2==0){
                count++;
            }
        }
        return count;
    }
};