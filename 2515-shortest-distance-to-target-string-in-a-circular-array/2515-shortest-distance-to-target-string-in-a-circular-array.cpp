class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n = words.size();
        int ans = INT_MAX;
        for(int i=0; i<n; i++){
            if(words[i] == target){
                int right = abs(i - startIndex);
                int left = n - abs(i - startIndex);
                int distance = min(right, left);
                ans = min(ans, distance);
            }
        }
        if(ans == INT_MAX){
            return -1;
        }else{
            return ans;
        }
    }
};