class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;

        for(int i=0; i<n; i+=2){
            string s1 = to_string(nums[i]);
            string s2 = to_string(nums[i+1]);
            string temp = s1 + s2;

            int num = stoi(temp);
            if(num<mini){
                mini = num;
            }
        }

        return mini;
    }
};