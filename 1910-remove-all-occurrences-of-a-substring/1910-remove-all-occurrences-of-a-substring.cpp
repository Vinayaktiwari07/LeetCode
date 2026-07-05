class Solution {
public:
    void removeOccRE(string &s, string &part){
        int found = s.find(part);
        if(found != string::npos){
            // part string has been located.
            // please remove it.
            string left_part = s.substr(0, found);
            string right_part = s.substr(found+part.size(), s.size());
            s = left_part + right_part;

            removeOccRE(s, part);
        }
        else{
            //base case
            // all the occurences of the part has been removed from s.
            return;
        }
    }

    string removeOccurrences(string s, string part) {
        removeOccRE(s, part);
        return s;
    }
};