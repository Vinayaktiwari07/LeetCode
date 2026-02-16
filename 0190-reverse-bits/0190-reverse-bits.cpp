class Solution {
public:
    int reverseBits(int n) {
        bitset<32> binary(n); // convert into bits
        string str = binary.to_string();  // convert into string

        reverse(str.begin(), str.end()); // ye string ko reverse krega

        bitset<32> reversedBits(str);      // convert back to bitset

        int value = reversedBits.to_ulong();

        return value;



    }
};