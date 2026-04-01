class Solution {
public:
    int countAsterisks(string s) {
        int n = s.size();

        int ast = 0;
        int bar = 2;

        for(int i=0; i<n; i++){
            if(s[i] == '*' && bar%2==0){
                ast++;
            }
            else if(s[i] == '|'){
                bar++;
            }
        }
        return ast;
    }
};