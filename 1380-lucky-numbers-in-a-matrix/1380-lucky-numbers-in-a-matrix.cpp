class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<int> mini(n);
        vector<int> maxi(m);

        for(int i=0; i<n; i++){
            mini[i] = *min_element(matrix[i].begin(), matrix[i].end());
        }
        for(int j=0; j<m; j++){
            int colMax = INT_MIN;
            for(int i=0; i<n; i++){
                colMax = max(colMax, matrix[i][j]);
            }
            maxi[j] = colMax;
        }

        vector<int> ans;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if (matrix[i][j] == mini[i] && matrix[i][j] == maxi[j]) {
                    ans.push_back(matrix[i][j]);
                }
            }
        }
        return ans;
    }
};