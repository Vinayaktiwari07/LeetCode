class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int sum = 0;
        vector<int> arr;
        arr.push_back(0);
        for(int i=0; i<n; i++){
            sum += gain[i];
            arr.push_back(sum);
        }

        int max = *max_element(arr.begin(), arr.end());

        return max;
    }
};