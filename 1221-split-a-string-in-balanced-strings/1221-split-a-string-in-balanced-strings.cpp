class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0;
        int n = s.size();

        int bal = 0;
        for(int i=0; i<n; i++){
            if(s[i] == 'L'){
                bal -= 1;
            }
            else{
                bal += 1;
            }

            if(bal == 0){
                count++;
            }
        }

        return count;
    }
};