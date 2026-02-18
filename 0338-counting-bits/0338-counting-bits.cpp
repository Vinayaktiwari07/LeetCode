class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> arr;
        for(int i=0; i<=n; i++){

            bitset<32> bits(i);// convert into binary
            string str = bits.to_string(); // store into string

            int count = 0;
            for(int i=0; i<str.size(); i++){
                if(str[i] == '1'){
                    count++;
                }
            }
            arr.push_back(count);
        }

        return arr;
    }
};