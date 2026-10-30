class Solution {
public:
    int calculateScore(int a, int b) {
        string binary1 = bitset<32>(a).to_string();
        string binary2 = bitset<32>(b).to_string();

        int s1 = 0;
        int s2 = 0;
        for(int i=0; i<binary1.size(); i++){
            if(binary1[i] == '1'){
                s1++;
            }
        }
        for(int i=0; i<binary2.size(); i++){
            if(binary2[i] == '1'){
                s2++;
            }
        }

        if(s1 >= s2){
            return s1*s2;
        }
        else{
            return s2/s1;
        }

        return -1;
    }
};