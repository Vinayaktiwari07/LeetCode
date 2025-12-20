class Solution {
public:
    double trimMean(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());

        int m = n/10;
        int s = m/2;
        int e = m/2;

        double sum=0;
        for(int i=s; i<n-e; i++){
            sum += arr[i];
        }

        return sum/(n-m);
    }
};