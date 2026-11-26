
class Solution {
private:
    struct TrieNode {
        TrieNode* children[26];
        vector<int> suggestions;

        TrieNode() {
            for (int i = 0; i < 26; i++) {
                children[i] = nullptr;
            }
        }
    };

    TrieNode* root = new TrieNode();

    void insert(const string& product, int index) {
        TrieNode* node = root;

        for (char ch : product) {
            int position = ch - 'a';

            if (node->children[position] == nullptr) {
                node->children[position] = new TrieNode();
            }

            node = node->children[position];

            // Products are sorted, so first 3 are lexicographically smallest
            if (node->suggestions.size() < 3) {
                node->suggestions.push_back(index);
            }
        }
    }

public:
    vector<vector<string>> suggestedProducts(
        vector<string>& products,
        string searchWord
    ) {
        sort(products.begin(), products.end());

        // Build Trie
        for (int i = 0; i < products.size(); i++) {
            insert(products[i], i);
        }

        vector<vector<string>> result;
        TrieNode* node = root;

        for (char ch : searchWord) {
            int position = ch - 'a';

            if (node != nullptr) {
                node = node->children[position];
            }

            vector<string> currentSuggestions;

            if (node != nullptr) {
                for (int index : node->suggestions) {
                    currentSuggestions.push_back(products[index]);
                }
            }

            result.push_back(currentSuggestions);
        }

        return result;
    }
};
