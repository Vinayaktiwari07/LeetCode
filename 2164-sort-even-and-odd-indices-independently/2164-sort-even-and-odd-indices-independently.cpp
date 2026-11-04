class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int n = nums.size();
        vector<int> odd;
        vector<int> even;
        vector<int> merged;

        for(int i=0; i<n; i+=2){
            even.push_back(nums[i]);
        }
        for(int i=1; i<n; i+=2){
            odd.push_back(nums[i]);
        }

        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end(), greater<int>());

        int e = 0, o = 0;

        for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                merged.push_back(even[e++]);
            }
            else{
                merged.push_back(odd[o++]);
            }
        }

        return merged;
    }
};