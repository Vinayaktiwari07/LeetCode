class Solution {
public:
    long long digitProduct(long long x) {
        long long product = 1;
        while (x > 0) {
            int d = x % 10;
            product *= d;
            x /= 10;
        }
        return product;
    }
    
    int smallestNumber(int n, int t) {
        while (true) {
            long long prod = digitProduct(n);
            if (prod % t == 0) {
                return n; // Found the answer
            }
            n++; // Check next number
        }
    }
};