class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        // sort(nums.begin(),nums.end());
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i] == 0 ){
                    swap(nums[i],nums[j]);

                }
            }
        }



        for(int i=0; i<n; i++){
            cout << nums[i] << ",";
        }
    }
};