class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        int start0 = 0; // pattern: 010101...
        int start1 = 0; // pattern: 101010...

        for(int i = 0; i < n; i++){
            
            // expected char if  '0'  se start hoga
            char expected0 = (i % 2 == 0) ? '0' : '1';
            
            // expected char if  '1' ae start hoga
            char expected1 = (i % 2 == 0) ? '1' : '0';

            if(s[i] != expected0) start0++;
            if(s[i] != expected1) start1++;
        }

        return min(start0, start1);
    }
};