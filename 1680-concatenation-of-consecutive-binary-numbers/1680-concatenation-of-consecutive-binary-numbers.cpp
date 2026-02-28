class Solution {
public:
    int concatenatedBinary(int n) {
        const int mod = 1e9 + 7;
        long long ans = 0;

        for(int i = 1; i <= n; i++){
            
            // count number of bits in i
            int bits = log2(i) + 1;
            
            // left shift existing number
            ans = ((ans << bits) % mod + i) % mod;
        }

        return ans;
    }
};