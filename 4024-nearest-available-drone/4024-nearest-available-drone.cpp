class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int ans  = INT_MAX;
        int mini = INT_MAX;
        int n = drones.size();

        for(int i=0; i<n; i++){
            int totaldistance = 0;
            for(int j=0; j<2; j++){
                int dist = abs(drones[i][j] - target[j]);
                totaldistance += dist;
            }
            if(totaldistance<=drones[i][2]){
                if(totaldistance<mini){
                    mini = totaldistance;
                    ans = i;
                }
                else if(totaldistance == mini){
                    ans = min(ans, i);
                }
            }
        }
        if(ans == INT_MAX){
            return -1;
        }

        return ans;
    }
};