class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        // int start=0;
        // int end=m-1;
        // while(start<=end){
        //     int mid = start+(end-start)/2;
        //     if(grid[mid]>0){
        //         start = mid+1;
        //     }
        //     else if(grid[mid]<0){
        //         end = mid-1;
        //     }
            
        // }
        int count = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] < 0){
                    count++;
                }
            }
        }

        return count;
    }
};