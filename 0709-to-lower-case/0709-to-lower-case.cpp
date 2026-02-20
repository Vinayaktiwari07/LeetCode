class Solution {
public:
    string toLowerCase(string str) {
        transform(str.begin(), str.end(), str.begin(),
                   [](unsigned char c){ return tolower(c); });
        return str;
    }
};