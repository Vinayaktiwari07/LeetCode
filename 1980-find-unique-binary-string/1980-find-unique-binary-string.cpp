class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums.size();

        for(int i = 0; i < (1 << n); i++){
            int temp = i;
            bitset<32> binary(temp);

            string str = binary.to_string();          // convert bitset to string
            str = str.substr(32 - n);                 // take last n bits

            bool found = false;

            for(int j = 0; j < n; j++){
                if(nums[j] == str){
                    found = true;
                    break;
                }
            }

            if(!found) return str;
        }

        return "";
    }
};