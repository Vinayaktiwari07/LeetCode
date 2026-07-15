class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int odd = n*n;
        int even = n*(n+1);
        int ans = gcd(odd, even);

        return ans;

    }
};