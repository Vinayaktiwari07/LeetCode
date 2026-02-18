class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
        vector<string> arr;

        for(int i=0; i<nums.size(); i++){
            bitset<32> bits(nums[i]);// convert into binary
            string str = bits.to_string(); // store into string
            arr.push_back(str);
        }
        int n = arr.size();
        int m = arr[0].size();
        string numStr = "";
        for(int i=0; i<m; i++){
            int count = 0;
            for(int j=0; j<n; j++){
                if(arr[j][i] == '1'){
                    count++;
                }
            }
            if(count >= k){
                numStr = numStr + '1';
            }
            else{
                numStr = numStr + '0';
            }
        }


        int number = stoi(numStr, nullptr, 2);
        return number;

    }
};