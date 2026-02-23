class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int need = 1 << k;
        vector<bool> seen(need, false);
        int count = 0;
        
        int num = 0;

        for(int i = 0; i < s.size(); i++) {
            num = ((num << 1) & (need - 1)) | (s[i] - '0');
            
            if(i >= k - 1) {
                if(!seen[num]) {
                    seen[num] = true;
                    count++;
                }
            }
        }
        
        return count == need;

        // ye bhi sahi hai but TLE de rha hai.
        // int result = 1 << k;

        // vector<string> arr;
        // for(int i=0; i<result; i++){
        //     bitset<32> bits(i);
        //     string bitString = bits.to_string();
        //     bitString = bitString.substr(32 - k);
        //     arr.push_back(bitString);
        // }

        // for(int i=0; i<arr.size(); i++){
        //     if(s.find(arr[i]) == string::npos){
        //         return false;
        //     }
        // }
        // return true;
    }
};