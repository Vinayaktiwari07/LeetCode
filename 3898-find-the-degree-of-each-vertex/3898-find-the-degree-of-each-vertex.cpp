class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<int> arr;
        for(int i=0; i<n; i++){
            int sum = 0;
            for(int j=0; j<m; j++){
                sum = sum + matrix[i][j];
            }
            arr.push_back(sum);
        }
        return arr;
    }
};