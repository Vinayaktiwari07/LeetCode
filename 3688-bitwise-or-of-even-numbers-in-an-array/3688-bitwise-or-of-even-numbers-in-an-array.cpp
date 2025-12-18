class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int n = nums.size();

        vector<int> arr;
        for(int i=0; i<n; i++){
            if(nums[i]%2==0){
                arr.push_back(nums[i]);
            }
        }

        int result = 0;
        for(int i=0; i<arr.size(); i++){
            result = result|arr[i];
        }

        return result;
    }
};