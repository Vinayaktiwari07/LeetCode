class Solution {
public:
    int minPartitions(string n) {
        int maxi = INT_MIN;
        for(int i=0; i<n.size(); i++){
            char digitchar = n[i];
            int digit = digitchar - '0';
            maxi = max(maxi, digit);
        }

        return maxi;
    }
};