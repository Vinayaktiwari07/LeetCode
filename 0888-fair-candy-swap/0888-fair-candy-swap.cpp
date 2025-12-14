class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int n = aliceSizes.size();
        int m = bobSizes.size();

        vector<int> arr;
        int aliceSum = accumulate(aliceSizes.begin(), aliceSizes.end(),0);
        int bobSum = accumulate(bobSizes.begin(), bobSizes.end(),0);
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int a = aliceSizes[i];
                int b = bobSizes[j];

                int newAliceSum = aliceSum - a + b;
                int newBobSum   = bobSum - b + a;

                if(newAliceSum == newBobSum){
                    arr.push_back(a);
                    arr.push_back(b);
                    return arr;
                }
            }
        }
        return arr;
    }
};