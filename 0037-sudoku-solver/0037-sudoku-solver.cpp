
class Solution {
public:
    int rowMask[9] = {};
    int colMask[9] = {};
    int boxMask[9] = {};

    int fullMask = (1 << 9) - 1;

    int getBox(int r, int c) {
        return (r / 3) * 3 + (c / 3);
    }

    bool solve(vector<vector<char>>& board) {
        int bestR = -1, bestC = -1;
        int minCount = 10;
        int bestMask = 0;

        // Find the empty cell with minimum candidates (MRV)
        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {

                if (board[r][c] != '.') continue;

                int b = getBox(r, c);

                int available = fullMask &
                    ~(rowMask[r] | colMask[c] | boxMask[b]);

                int count = __builtin_popcount(available);

                if (count == 0)
                    return false;

                if (count < minCount) {
                    minCount = count;
                    bestR = r;
                    bestC = c;
                    bestMask = available;
                }

                if (minCount == 1)
                    break;
            }

            if (minCount == 1)
                break;
        }

        // No empty cell means Sudoku is solved
        if (bestR == -1)
            return true;

        int b = getBox(bestR, bestC);

        // Try all possible digits
        while (bestMask) {
            int bit = bestMask & -bestMask;
            bestMask -= bit;

            int digit = __builtin_ctz(bit) + 1;

            board[bestR][bestC] = char('0' + digit);

            rowMask[bestR] |= bit;
            colMask[bestC] |= bit;
            boxMask[b] |= bit;

            if (solve(board))
                return true;

            // Backtrack
            board[bestR][bestC] = '.';

            rowMask[bestR] ^= bit;
            colMask[bestC] ^= bit;
            boxMask[b] ^= bit;
        }

        return false;
    }

    void solveSudoku(vector<vector<char>>& board) {

        // Initialize row, column and box masks
        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {

                if (board[r][c] == '.') continue;

                int digit = board[r][c] - '0';
                int bit = 1 << (digit - 1);

                int b = getBox(r, c);

                rowMask[r] |= bit;
                colMask[c] |= bit;
                boxMask[b] |= bit;
            }
        }

        solve(board);
    }
};
