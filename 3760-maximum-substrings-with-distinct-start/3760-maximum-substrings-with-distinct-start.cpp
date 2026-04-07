class Solution {
public:
    int maxDistinct(string s) {
        unordered_map<char, bool> seen;

        for (char c : s) {
            seen[c] = true;
        }
        return seen.size();
    }
};