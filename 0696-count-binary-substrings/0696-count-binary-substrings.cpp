class Solution {
public:
    int countBinarySubstrings(string s) {
        int n = s.size();
        int count = 0;
        int prevGroup = 0;
        int currGroup = 1;
        
        for(int i = 1; i < n; i++) {
            if(s[i] == s[i - 1]) {
                currGroup++;
            } else {
                count += min(prevGroup, currGroup);
                prevGroup = currGroup;
                currGroup = 1;
            }
        }
        
        count += min(prevGroup, currGroup);
        
        return count;
    }
};