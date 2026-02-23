class Solution {
public:
    int binaryGap(int n) {
        bitset<32> bits(n);
        string bitString = bits.to_string();

        int maxi = 0;
        for(int i=0; i<bitString.size(); i++){
            for(int j=i+1; j<bitString.size(); j++){
                if(bitString[i] == '1' && bitString[j] == '1'){
                    int idx = j-i;
                    maxi = max(maxi, idx);
                    break;
                }
            }
        }

        return maxi;
    }
};