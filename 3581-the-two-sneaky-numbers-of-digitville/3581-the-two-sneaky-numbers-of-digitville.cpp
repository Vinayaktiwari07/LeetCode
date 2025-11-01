class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n = nums.size();

        int max = 1000;
        int freq[1000] = {0};

        for(int i=0; i<n; i++){
            freq[nums[i]]++;
        }

        vector<int> result;
        for(int i=0; i<max; i++){
            if(freq[i] == 2){
                result.push_back(i);
            }
        }

        return result;


    }
};