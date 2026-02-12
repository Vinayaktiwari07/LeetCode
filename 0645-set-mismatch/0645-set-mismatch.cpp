class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(2, 0);
        vector<int> freq(n + 1, 0);

        for(int i=0; i<n; i++){
            freq[nums[i]]++;
        }

        for(int i = 1; i <= n; i++){
            if(freq[i] == 2){
                result[0] = i;  // duplicate
            }
            if(freq[i] == 0){
                result[1] = i;  // missing
            }
        }
        return result;
    }
};