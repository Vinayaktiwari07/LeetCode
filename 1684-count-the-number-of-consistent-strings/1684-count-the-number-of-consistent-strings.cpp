class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int n = words.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            string str = words[i];
            bool isValid = true;

            for (int j = 0; j < str.size(); j++) {
                bool found = false;

                for (int k = 0; k < allowed.size(); k++) {
                    if (str[j] == allowed[k]) {
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    isValid = false;
                    break;
                }
            }

            if (isValid) {
                count++;
            }
        }

        return count;
    }
};