class Solution {
public:
    int numberOfMatches(int n) {
        int sum = 0;
        while(n > 1) {
            if(n % 2 == 0) {
                sum += n / 2;
                n = n / 2;
            } else {
                sum += (n - 1) / 2;
                n = (n - 1) / 2 + 1;
            }
        }
        return sum;

        // int sum = 0;
        // if(n%2==0){
        //     int match = n/2;
        //     sum += match;
        //     int adteam = n/2;
        //     n = adteam;
        // }
        // else{
        //     int matcho = (n-1)/2;
        //     sum += matcho;
        //     int adteamo = (n-1)/2+1;
        //     n = adteamo;
        // }

        // return sum;
    }
};