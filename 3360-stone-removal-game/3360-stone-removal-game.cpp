class Solution {
public:
    bool canAliceWin(int n) {
        int count= 0;
        int minus = 10;
        if(n < 10){
            return false;
        }else{
            while(n >= minus){
                n -= minus;
                count++;
                minus--;
            }
        }

        return count%2 == 0 ? false : true;

    }
};