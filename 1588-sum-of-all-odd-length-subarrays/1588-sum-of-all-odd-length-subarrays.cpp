class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();

        int sum = 0;
        for(int i=1; i<=n; i += 2){
            for(int j=0; j+i<=n; j++){
                int sumi = 0;
                for(int k=j; k<j+i; k++){
                    sumi += arr[k];
                }
                sum += sumi;

            }
        }
        return sum;
    }
};