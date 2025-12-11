class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();

        vector<int> arr;
        for(int i=0; i<n; i++){
            arr.push_back(heights[i]);
        }

        sort(heights.begin(), heights.end());

        int count = 0;
        for(int i=0; i<n; i++){
            if(heights[i] != arr[i]){
                count++;
            }
        }

        return count;
        
    }
};