class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int ans = 0;
        int current = 0;
        for(int i=0; i<requests.size(); i++){
            int sum = abs(current - requests[i]);
            current = requests[i];
            ans += sum;
        }

        return ans;
    }
};