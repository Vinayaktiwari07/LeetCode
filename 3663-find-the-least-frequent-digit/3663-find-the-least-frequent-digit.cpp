class Solution {
public:
    int getLeastFrequentDigit(int n) {
        map<int, int> mp;
        
        while (n > 0) {
            int digit = n % 10;
            mp[digit]++; 
            n /= 10;
        }

        int leastDigit = -1;
        int minFreq = INT_MAX;

        for (auto const& p : mp) {
            if (p.second < minFreq) {
                minFreq = p.second;
                leastDigit = p.first;
            }
        }

        return leastDigit;

    }
};