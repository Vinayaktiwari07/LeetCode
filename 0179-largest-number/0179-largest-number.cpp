class Solution {
public:
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [](int a, int b){
            return to_string(a) + to_string(b) > to_string(b) + to_string(a);
        });

        // edge case: if highest is 0, whole number is 0
        if(nums[0] == 0) return "0";

        string ans = "";

        for(int i=0; i<nums.size(); i++){
            string str = to_string(nums[i]);
            ans += str;
        }

        return ans;
    }
};