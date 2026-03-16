class Solution {
public:
    int mySqrt(int x) {
        int idx = 0;
        for(int i=0; i<=x; i++){
            if((long long)i*i <= x){
                idx = i;
            }
            else{
                break; 
            }

        }
        return idx;
    }
};