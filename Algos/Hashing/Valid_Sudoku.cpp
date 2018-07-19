class Solution {
public:
    bool isValidSudoku(vector<string> &board) {
        bool r[9][9], c[9][9], s[3][3][9];
        memset(r, false, sizeof(r));
        memset(c, false, sizeof(c));
        memset(s, false, sizeof(s));
        int number;
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] > '0' && board[i][j] <='9') {
                    number = board[i][j] - '1';
                    if (r[i][number]) return false;
                    r[i][number] = true;
                    if (c[j][number]) return false;
                    c[j][number] = true;
                    if (s[i / 3][j / 3][number]) return false;
                    s[i / 3][j / 3][number] = true;
                }
            }
        }
        return true;
    }
};