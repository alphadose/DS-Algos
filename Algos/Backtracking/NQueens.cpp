bool isSafe(vector<string> &board, int row, int col, int A)
{
    int i, j;
    /* Check this row on left side */
    for (i = 0; i < col; i++)
        if (board[row][i]=='Q')
            return false;
 
    /* Check upper diagonal on left side */
    for (i=row, j=col; i>=0 && j>=0; i--, j--)
        if (board[i][j]=='Q')
            return false;
 
    /* Check lower diagonal on left side */
    for (i=row, j=col; j>=0 && i<A; i++, j--)
        if (board[i][j]=='Q')
            return false;
    return true;
}

/* A recursive utility function to solve N
   Queen problem */
bool solveNQUtil(vector<string> &board, int col, vector<vector<string>> &ans, int A)
{
    /* base case: If all queens are placed
      then return true */
    if (col >= A) {
        ans.push_back(board);
        return true;
    }
 
    /* Consider this column and try placing
       this queen in all rows one by one */
    for (int i = 0; i < A; i++)
    {
        /* Check if the queen can be placed on
          board[i][col] */
        if ( isSafe(board, i, col, A) )
        {
            /* Place this queen in board[i][col] */
            board[i][col] = 'Q';
 
            /* recur to place rest of the queens */
            solveNQUtil(board, col + 1, ans, A);
                
 
            /* If placing queen in board[i][col]
               doesn't lead to a solution, then
               remove queen from board[i][col] */
            board[i][col] = '.'; // BACKTRACK
        }
    }
 
     /* If the queen can not be placed in any row in
        this colum col  then return false */
    return false;
}

vector<vector<string> > Solution::solveNQueens(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<vector<string> > ans;
    vector<string> board;
    string temp="";
    for(int i=0;i<A;i++)
        temp+='.';
    for(int i=0;i<A;i++)
        board.push_back(temp);
    solveNQUtil(board, 0, ans, A);
    return ans;
}