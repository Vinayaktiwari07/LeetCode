class Solution {
public:
    int strStr(string haystack, string needle) {
        size_t index = haystack.find(needle);

        if (index == string::npos) {
            return -1;  // not found
        } else {
            return static_cast<int>(index);  // found, return position
        }


    }
};