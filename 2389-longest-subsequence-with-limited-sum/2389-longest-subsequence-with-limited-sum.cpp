class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();
        int m = queries.size();

        sort(nums.begin(), nums.end());

        vector<int> arr;
        for(int i=0; i<m; i++){
            int count = 0;
            int sum = 0;
            for(int j=0; j<n; j++){
                if((sum + nums[j])<=queries[i]){
                    sum += nums[j];
                    count++;
                }
                else{
                    break;
                }
            }
            arr.push_back(count);
        }

        return arr;
    }
};