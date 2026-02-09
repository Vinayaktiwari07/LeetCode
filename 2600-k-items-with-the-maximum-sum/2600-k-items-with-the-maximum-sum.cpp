class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int sum = 0;

        if(numOnes >= k){
            return k;
        }
        else if(numOnes + numZeros >= k){
            return numOnes;
        }
        else if(numOnes + numZeros + numNegOnes >=k){
            int remaining = k - (numOnes + numZeros);
            return numOnes - remaining;
        }
        else{
            return -1;
        }
    }
};