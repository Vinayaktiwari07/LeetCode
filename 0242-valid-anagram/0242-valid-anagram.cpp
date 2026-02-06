class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();

        if(n != m){
            return false;
        }

        for(int i=0; i<n; i++){
            bool flag = false;
            char str = s[i];
            
            for(int j=0; j<m; j++){
                if(t[j] == str){
                    flag = true;
                    t[j] = '#';
                    break;
                }
            }
            if(flag == false){
                return false;
            }
        }
        return true;

    }
};