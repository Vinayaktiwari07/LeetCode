
class Solution {
private:
    struct TrieNode {
        TrieNode* children[26];
        bool isEnd;

        TrieNode() {
            for (int i = 0; i < 26; i++) {
                children[i] = nullptr;
            }
            isEnd = false;
        }
    };

    TrieNode* root;

    void insert(const string& word) {
        TrieNode* node = root;

        for (char ch : word) {
            int index = ch - 'a';

            if (node->children[index] == nullptr) {
                node->children[index] = new TrieNode();
            }

            node = node->children[index];
        }

        node->isEnd = true;
    }

public:
    bool wordBreak(string s, vector<string>& wordDict) {
        root = new TrieNode();

        // Build Trie from dictionary
        for (const string& word : wordDict) {
            insert(word);
        }

        int n = s.size();

        // dp[i] = whether s[0...i-1] can be segmented
        vector<bool> dp(n + 1, false);

        dp[0] = true;

        for (int i = 0; i < n; i++) {

            // Only start searching from reachable positions
            if (!dp[i]) {
                continue;
            }

            TrieNode* node = root;

            // Search for dictionary words starting at i
            for (int j = i; j < n; j++) {
                int index = s[j] - 'a';

                if (node->children[index] == nullptr) {
                    break;
                }

                node = node->children[index];

                // A dictionary word is found
                if (node->isEnd) {
                    dp[j + 1] = true;
                }
            }
        }

        return dp[n];
    }
};
