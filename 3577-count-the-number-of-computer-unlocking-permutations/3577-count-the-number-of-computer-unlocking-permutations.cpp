class Solution {
public:
    static const long long MOD = 1000000007LL;
    int countPermutations(vector<int>& complexity) {
        int n = complexity.size();

        int count = 0;
        for(int i=1; i<n; i++){
            // for(int j=i+1; j<n; j++){
            //     if(complexity[i]<complexity[i+1]){
            //         // count++;
            //     }
            //     else if(complexity[i]<complexity[j]){
            //         // count++;
            //     }
            // }
            if(complexity[0]>=complexity[i]){
                return 0;
            }
        }

        long long ans = 1;
        for (int k = 2; k <= n-1; ++k) ans = (ans * k) % MOD;
        return (int)ans;
    }
};