class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> brr;
        int x = 1;
        int i =0;
        while(brr.size()<k){
            if(i<n && arr[i] == x){
                i++;
            }
            else{
                brr.push_back(x);
            }
            x++;
        }

        return brr[k-1];
    }
};