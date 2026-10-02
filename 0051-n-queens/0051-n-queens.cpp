class Solution {
public:
    unordered_map<int, bool> rowCheck;
    unordered_map<int, bool> upperLeftDiagonalCheck;
    unordered_map<int, bool> lowerLeftDiagonalCheck;

    void storeBoard(vector<vector<char>> &board, int n, vector<vector<string>> &ans){
        vector<string> temp;
        for(int i=0; i<n; i++){
            string output = "";
            for(int j=0; j<n; j++){
                output.push_back(board[i][j]);
            }
            temp.push_back(output);
        }
        ans.push_back(temp);
    }

    bool isSafe(int row, int col, vector<vector<char>> &board, int n){
        if(rowCheck[row] == true){
            return false;
        }

        if(upperLeftDiagonalCheck[n-1+col-row] == true){
            return false;
        }

        if(lowerLeftDiagonalCheck[row+col] == true){
            return false;
        }

        return true;
    }

    void solve(vector<vector<char>> &board, int col, int n, vector<vector<string>> &ans){
        // base case
        if(col >= n){
            // print the board
            storeBoard(board, n, ans);
            return;
        }

        // 1 case solve krna hai, baaki ka recursion sambhaal lega
        for(int row=0; row<n; row++){
            // check if the queen can be placed at (row, col)
            if(isSafe(row, col, board,n)){
                // rakh do queen ko
                board[row][col] = 'Q';
                
                rowCheck[row] = true;
                upperLeftDiagonalCheck[n-1+col-row] = true;
                lowerLeftDiagonalCheck[row+col] = true;

                // recursion solution laega
                solve(board, col+1, n, ans);
                // backtracking
                board[row][col] = '.';

                rowCheck[row] = false;
                upperLeftDiagonalCheck[n-1+col-row] = false;
                lowerLeftDiagonalCheck[row+col] = false;

            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<char>> board(n, vector<char>(n, '.'));
        vector<vector<string>> ans;
        int col = 0;

        // 0 -> empty cell
        // 1 -> queen at the cell
        solve(board, col, n, ans);
        return ans;
    }
};