class Solution {
public:
    int digitFrequencyScore(int n) {
        int sum = 0;
        string str = to_string(n);
        for(int i=0; i<str.size(); i++){
            int temp = str[i] - '0';
            sum += temp;
        }

        return sum;
        
    }
};