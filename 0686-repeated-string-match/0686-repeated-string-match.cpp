class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int count = (b.size() + a.size() - 1) / a.size();

        string s = "";

        for(int i=0; i<count; i++){
            s += a;
        }

        if (s.find(b) != string::npos) {
            return count;
        }

        s += a;

        if (s.find(b) != string::npos) {
            return count + 1;
        }

        return -1;

    }
};