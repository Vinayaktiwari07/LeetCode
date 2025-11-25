class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        vector<int> arr;
        int count = 0;
        for(int i=0; i<n+m-1; i++){
            vector<int> temp;
            for(int j=0; j<n; j++){
                for(int k=0; k<m; k++){
                    if(j+k == count){
                        temp.push_back(mat[j][k]);
                    }
                }
            }
            if(count % 2 == 0){
                reverse(temp.begin(), temp.end());
            }

            for(int x : temp){
                arr.push_back(x);
            }
            count++;
        }

        return arr;
    }
};