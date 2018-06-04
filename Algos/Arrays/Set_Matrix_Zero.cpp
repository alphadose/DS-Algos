void Solution::setZeroes(vector<vector<int> > &mat) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more detail
    // variables to check if there are any 1
    // in first row and column
    bool row_flag = false;
    bool col_flag = false;
    int R = mat.size();
    int C = mat[0].size();
 
    // updating the first row and col if 1
    // is encountered
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (i == 0 && mat[i][j] == 0)
                row_flag = true;
 
            if (j == 0 && mat[i][j] == 0)
                col_flag = true;
 
            if (mat[i][j] == 0) {
 
                mat[0][j] = 0;
                mat[i][0] = 0;
            }
        }
    }
 
    // Modify the input matrix mat[] using the
    // first row and first column of Matrix mat
    for (int i = 1; i < R; i++) {
        for (int j = 1; j < C; j++) {
 
            if (mat[0][j] == 0 || mat[i][0] == 0) {
                mat[i][j] = 0;
            }
        }
    }
 
    // modify first row if there was any 1
    if (row_flag == true) {
        for (int i = 0; i < C; i++) {
            mat[0][i] = 0;
        }
    }
 
    // modify first col if there was any 1
    if (col_flag == true) {
        for (int i = 0; i < R; i++) {
            mat[i][0] = 0;
        }
    }
    
}
