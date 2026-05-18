class Solution {
public:
    int smallestNumber(int n) {
        string binary = bitset<32>(n).to_string();
        binary = binary.substr(binary.find('1'));
        for(int i=0; i<binary.size(); i++){
            if(binary[i] == '0'){
                binary[i] = '1';
            }
        }

        int num = stoi(binary, nullptr, 2);
        return num;
    }
};