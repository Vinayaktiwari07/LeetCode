class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        int m = image[0].size();
        // vector<vector<int>> arr;
        vector<vector<int>> arr(n, vector<int>(m,0));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                arr[i][m-1-j] = image[i][j];
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(arr[i][j] == 1){
                    arr[i][j] = 0;
                }
                else{
                    arr[i][j] = 1;
                }
            }
        }

        return arr;
    }
};