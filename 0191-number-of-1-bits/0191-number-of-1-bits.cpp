class Solution {
public:
    int hammingWeight(int n) {
        bitset<32> bits(n);// convert into binary
        string str = bits.to_string(); // store into string

        int count = 0;
        for(int i=0; i<str.size(); i++){
            if(str[i] == '1'){
                count++;
            }
        }

        return count;
        
    }
};