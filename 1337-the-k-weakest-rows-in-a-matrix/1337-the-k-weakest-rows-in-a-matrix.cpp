class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int rows = mat.size();
        int cols = mat[0].size();

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

        for(int i=0; i<rows; i++){
            int count = 0;
            for(int j=0; j<cols;j++){
                if(mat[i][j] == 1){
                    count++;
                }
            }
            pq.push({count, i});
        }

        vector<int> ans;
        
        for(int i=0; i<k; i++){
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};