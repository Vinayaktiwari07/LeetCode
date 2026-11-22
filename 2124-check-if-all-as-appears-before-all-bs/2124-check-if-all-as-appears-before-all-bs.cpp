class Solution {
public:
    bool checkString(string s) {
        int n = s.size();
        bool ans = true;
        int idx_a = INT_MIN;
        int idx_b = INT_MAX;

        for(int i=0; i<n; i++){
            if(s[i] == 'a'){
                idx_a = i;
            }
            if(s[i] == 'b'){
                idx_b = i;
            }
            if(idx_a > idx_b){
                ans = false;
                break;
            }
        }
        return ans;;
    }
};