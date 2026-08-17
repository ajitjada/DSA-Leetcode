class Solution {
public:
    bool isvalid(vector<vector<char>> &board, int k, int l, char dig) {
        int n = board.size();
        int m = board[0].size();

        for(int i=0; i<n; i++) {
            if(i != l && dig == board[k][i]) {
                return false;
            }
        }

        for(int j=0; j<n; j++) {
            if(j != k && dig == board[j][l]) {
                return false;
            }
        }

        int a = (k / 3) * 3;
        int b = (l / 3) * 3;

        for(int i=a; i<a+3; i++) {
            for(int j=b; j<b+3; j++) {
                if(i != k && j != l && dig == board[i][j]) {
                    return false;
                }
            }
        }

        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(board[i][j] == '.') {
                    continue;
                }

                char dig = board[i][j];

                if(!isvalid(board, i, j, dig)) {
                    return false;
                }
            }
        }

        return true;
    }
};