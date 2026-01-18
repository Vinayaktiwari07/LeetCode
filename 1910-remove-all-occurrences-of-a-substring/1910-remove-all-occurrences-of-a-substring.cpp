class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n = part.length();
        int pos = s.find(part);

        while(pos != string :: npos){
            s.erase(pos, n);
            pos = s.find(part);
        }

        return s;

    }
};