class Solution {
public:
    int minBitFlips(int start, int goal) {
        bitset<32> sb(start);
        bitset<32> gb(goal);

        string ssb = sb.to_string();
        string sgb = gb.to_string();


        int count = 0;
        for(int i=0; i<32; i++){
            if(ssb[i] != sgb[i]){
                count++;
            }
        }
        return count;
    }
};