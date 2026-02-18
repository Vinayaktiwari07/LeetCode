class Solution {
public:
    bool hasAlternatingBits(int n) {
        bitset<32> bits(n);// convert into binary
        string bitString = bits.to_string(); // store into string

        // Remove leading zeros
        int firstOne = bitString.find('1');
        bitString = bitString.substr(firstOne);
        
        for(int i=0; i<bitString.size()-1; i++){
            if(bitString[i] == bitString[i+1]){
                return false;
            }
        }
        return true;

        


    }
};