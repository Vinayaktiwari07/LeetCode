class Solution {
public:
    int minimumDeletions(string s) {
        int n = s.size();
       
        int rightA = 0;
        for(char c : s){
            if(c == 'a') rightA++;
        }

        int leftB = 0;
        int ans = INT_MAX;

        for(int i = 0; i < n; i++){
            if(s[i] == 'a'){
                rightA--;          // 'a' ab right side me nahi
            }

            ans = min(ans, leftB + rightA);

            if(s[i] == 'b'){
                leftB++;           // 'b' ab left side me aa gaya
            }
        }

        return ans;
    }
};