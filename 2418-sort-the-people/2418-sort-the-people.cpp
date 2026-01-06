class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = heights.size();

        // int maxi = INT_MIN;
        for(int i=0; i<n; i++){
            // int maxi = *max_element(heights.begin(), heights.end());
            int maxIdx = i;
            for(int j=i+1; j<n; j++){
                if(heights[j] > heights[maxIdx]){
                    maxIdx = j;
                }
            }
            swap(heights[i], heights[maxIdx]);
            swap(names[i], names[maxIdx]);
        }
        return names;
    }
};