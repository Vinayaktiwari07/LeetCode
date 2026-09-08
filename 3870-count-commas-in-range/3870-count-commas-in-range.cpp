class Solution {
public:
    int countCommas(int n) {
        // int count = 0;
        // int rdm = n;
        // while(rdm>0){
        //     rdm = rdm/10;
        //     count++;
        // }
        int ans = 0;
        if(n>=1000){
            ans = (n-1000)+1;
        }

        return ans;

    }
};