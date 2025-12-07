class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();

        if (strs.empty()) return "";

        string prefix = "";
        string first = strs[0];

        for (int j = 0; j < first.size(); j++) {
            char ch = first[j];

            for (int i = 1; i < n; i++) {
                if (j >= strs[i].size() || strs[i][j] != ch) {
                    return prefix;
                }
            }

            prefix += ch;
        }

        return prefix;
    }
};