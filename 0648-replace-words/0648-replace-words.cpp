
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

    string findRoot(const string& word) {
        TrieNode* node = root;
        string prefix;

        for (char ch : word) {
            int index = ch - 'a';

            // Root path does not exist
            if (node->children[index] == nullptr) {
                return word;
            }

            node = node->children[index];
            prefix += ch;

            // First complete root is the shortest root
            if (node->isEnd) {
                return prefix;
            }
        }

        return word;
    }

public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        root = new TrieNode();

        // Build Trie using dictionary roots
        for (const string& word : dictionary) {
            insert(word);
        }

        string answer;
        string word;

        // Process sentence word by word
        for (char ch : sentence) {
            if (ch == ' ') {
                answer += findRoot(word);
                answer += ' ';
                word.clear();
            } else {
                word += ch;
            }
        }

        // Process the last word
        answer += findRoot(word);

        return answer;
    }
};
