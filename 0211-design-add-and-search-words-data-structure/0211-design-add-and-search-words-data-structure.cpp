
class WordDictionary {
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

    bool dfs(TrieNode* node, const string& word, int index) {
        // If all characters are processed
        if (index == word.size()) {
            return node->isEnd;
        }

        char ch = word[index];

        // Wildcard '.' can match any character
        if (ch == '.') {
            for (int i = 0; i < 26; i++) {
                if (node->children[i] != nullptr) {
                    if (dfs(node->children[i], word, index + 1)) {
                        return true;
                    }
                }
            }

            return false;
        }

        // Normal character
        int position = ch - 'a';

        if (node->children[position] == nullptr) {
            return false;
        }

        return dfs(node->children[position], word, index + 1);
    }

public:
    WordDictionary() {
        root = new TrieNode();
    }

    void addWord(string word) {
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

    bool search(string word) {
        return dfs(root, word, 0);
    }
};
