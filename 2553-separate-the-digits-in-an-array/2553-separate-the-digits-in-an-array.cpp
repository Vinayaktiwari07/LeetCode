class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr;

        for(int i=0; i<n; i++){
            if(nums[i] == 0){
                arr.push_back(0);
                continue;
            }
            vector<int> temp;
            while (nums[i] > 0) {
                temp.push_back(nums[i] % 10);
                nums[i] /= 10;
            }

            for(int j=temp.size()-1; j>=0; j--){
                arr.push_back(temp[j]);
            }
        }

        return arr;
    }
};