class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int n = timePoints.size();
        vector<int> minute;

        for(int i=0; i<n; i++){
            string curr = timePoints[i];

            int hours = stoi(curr.substr(0,2));
            int minutes = stoi(curr.substr(3,2));
            int totalMin = hours*60 + minutes;
            minute.push_back(totalMin);
        }

        sort(minute.begin(), minute.end());

        int ans = INT_MAX;
        for(int i=0; i<minute.size()-1; i++){
            int diff = minute[i+1] - minute[i];
            ans = min(diff, ans);
        }

        int lastDiff = (minute[0]+1440) - minute[n-1];
        ans = min(lastDiff, ans);
        
        return ans;


    }
};