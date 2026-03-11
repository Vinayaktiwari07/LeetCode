class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0) return 1;
        // binary me change kiya
        string binary = bitset<32>(n).to_string();
        // trailing zero ko remove kr diya
        binary.erase(0, binary.find_first_not_of('0'));
        // 0 ko 1 kiya and 1 ko 0.
        for(int i=0; i<binary.size(); i++){
            if(binary[i]=='0'){
                binary[i] = '1';
            }
            else{
                binary[i] = '0';
            }
        }

        // after change isko ab int value me change krenge
        int number = stoi(binary, nullptr, 2);

        return number;
    }
};