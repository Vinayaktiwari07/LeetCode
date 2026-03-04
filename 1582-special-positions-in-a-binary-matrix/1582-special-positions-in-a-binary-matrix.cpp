class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int count = 0;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                
                if(mat[i][j] == 1){
                    
                    int rcount = 0;
                    int ccount = 0;

                    // count 1s in row
                    for(int k = 0; k < m; k++){
                        if(mat[i][k] == 1){
                            rcount++;
                        }
                    }

                    // count 1s in column
                    for(int k = 0; k < n; k++){
                        if(mat[k][j] == 1){
                            ccount++;
                        }
                    }

                    if(rcount == 1 && ccount == 1){
                        count++;
                    }
                }
            }
        }

        return count;
    }
};