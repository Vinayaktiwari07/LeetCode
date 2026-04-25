class Solution {
public:
    string clearDigits(string s) {
        string st; // acts like a stack
        for (char c : s) {
            if (isdigit(c)) {
                // remove the previous character if it exists
                if (!st.empty()) {
                    st.pop_back();
                }
                // skip adding the digit itself
            } else {
                st.push_back(c);
            }
        }
        return st;
    }
};