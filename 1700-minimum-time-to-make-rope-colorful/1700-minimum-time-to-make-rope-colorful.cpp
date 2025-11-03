class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int sum = 0;
        int n = colors.size();
        int maxTime = neededTime[0];

        for(int i=1; i<n; i++){
            if(colors[i] == colors[i-1]){
                sum += min(maxTime, neededTime[i]);
                maxTime = max(maxTime, neededTime[i]);
            }else{
                maxTime = neededTime[i];
            }
        }

        return sum;
    }
};