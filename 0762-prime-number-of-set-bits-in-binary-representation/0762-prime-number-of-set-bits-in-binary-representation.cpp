class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1) return false;       // 0 and 1 are not prime
        if (n == 2) return true;        // 2 is prime
        if (n % 2 == 0) return false;   // even numbers > 2 are not prime

        // check divisibility up to sqrt(n)
        for (int i = 3; i <= sqrt(n); i += 2) {
            if (n % i == 0) return false;
        }
        return true;
    }

    int countPrimeSetBits(int left, int right) {
        int ans = 0;
        for(int i=left; i<=right; i++){
            bitset<32> bits(i);// convert into binary
            string str = bits.to_string(); // store into string

            int count = 0;
            for(int i=0; i<str.size(); i++){
                if(str[i] == '1'){
                    count++;
                }
            }
            if(isPrime(count)){
                ans++;
            }

        }

        return ans;
    }
};