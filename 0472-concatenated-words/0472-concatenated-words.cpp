
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

    TrieNode* root = new TrieNode();

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

    bool canForm(const string& word) {
        int n = word.size();

        vector<bool> dp(n + 1, false);
        dp[0] = true;

        for (int i = 0; i < n; i++) {
            if (!dp[i]) continue;

            TrieNode* node = root;

            for (int j = i; j < n; j++) {
                int index = word[j] - 'a';

                if (node->children[index] == nullptr) {
                    break;
                }

                node = node->children[index];

                if (node->isEnd) {
                    dp[j + 1] = true;
                }
            }
        }

        return dp[n];
    }

public:
    vector<string> findAllConcatenatedWordsInADict(
        vector<string>& words
    ) {
        sort(words.begin(), words.end(),
             [](const string& a, const string& b) {
                 return a.size() < b.size();
             });

        vector<string> result;

        for (const string& word : words) {
            // Check before inserting the current word
            if (canForm(word)) {
                result.push_back(word);
            }

            // Insert for use by longer words
            insert(word);
        }

        return result;
    }
};
