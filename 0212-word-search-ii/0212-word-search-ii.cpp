
class Solution {
private:
    struct TrieNode {
        array<unique_ptr<TrieNode>, 26> children;
        string word;

        bool hasChildren() const {
            for (const auto& child : children) {
                if (child != nullptr) {
                    return true;
                }
            }
            return false;
        }
    };

    TrieNode root;
    vector<string> result;

    void insert(const string& word) {
        TrieNode* node = &root;

        for (char ch : word) {
            int index = ch - 'a';

            if (!node->children[index]) {
                node->children[index] = make_unique<TrieNode>();
            }

            node = node->children[index].get();
        }

        node->word = word;
    }

    void dfs(vector<vector<char>>& board,
             int row,
             int col,
             TrieNode* node) {

        char ch = board[row][col];
        int index = ch - 'a';

        TrieNode* next = node->children[index].get();

        if (next == nullptr) {
            return;
        }

        // If a complete word is found
        if (!next->word.empty()) {
            result.push_back(next->word);

            // Avoid adding the same word again
            next->word.clear();
        }

        // Mark current cell as visited
        board[row][col] = '#';

        int m = board.size();
        int n = board[0].size();

        // Explore 4 adjacent directions
        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        for (int i = 0; i < 4; i++) {
            int newRow = row + dr[i];
            int newCol = col + dc[i];

            if (newRow >= 0 && newRow < m &&
                newCol >= 0 && newCol < n &&
                board[newRow][newCol] != '#') {

                dfs(board, newRow, newCol, next);
            }
        }

        // Restore the board
        board[row][col] = ch;

        // Trie pruning:
        // Remove nodes that cannot lead to any remaining word
        if (next->word.empty() && !next->hasChildren()) {
            node->children[index].reset();
        }
    }

public:
    vector<string> findWords(vector<vector<char>>& board,
                             vector<string>& words) {

        result.clear();

        // Build Trie
        for (const string& word : words) {
            insert(word);
        }

        int m = board.size();
        int n = board[0].size();

        // Start DFS from every cell
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                dfs(board, i, j, &root);
            }
        }

        return result;
    }
};
