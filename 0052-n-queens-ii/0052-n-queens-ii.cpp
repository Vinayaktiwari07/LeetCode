
class Solution {
public:
    int totalNQueens(int n) {
        int count = 0;
        int mask = (1 << n) - 1;

        function<void(int, int, int, int)> solve =
            [&](int row, int cols, int diag1, int diag2) {

                if (row == n) {
                    count++;
                    return;
                }

                int available = mask & ~(cols | diag1 | diag2);

                while (available) {
                    int bit = available & -available;

                    available -= bit;

                    solve(
                        row + 1,
                        cols | bit,
                        (diag1 | bit) << 1,
                        (diag2 | bit) >> 1
                    );
                }
            };

        solve(0, 0, 0, 0);

        return count;
    }
};
