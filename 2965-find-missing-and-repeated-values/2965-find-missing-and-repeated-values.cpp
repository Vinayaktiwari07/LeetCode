class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();

        vector<int> arr;

        map<int, int> mp;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                mp[grid[i][j]]++;

            }

        }

        int missing = -1;
        int repeated = -1;
        for(int i=1; i<=n*n; i++){
            if(mp[i] == 2){
                repeated = i;
                // arr.push_back(i);
            }
            if(mp[i] == 0){
                missing = i;
                // arr.push_back(i);
            }
        }

        // return arr;
        return {repeated, missing};
    }
};