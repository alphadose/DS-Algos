int Solution::isValidSudoku(const vector<string> &A) {
    map<char, int> track;
    for(int i=0;i<A.size();i++) {
        for(int j=0;j<9;j++)
            if(track.find(A[i][j])!=track.end())
                return 0;
            else if(A[i][j]!='.')
                track[A[i][j]] = 1;
        track.clear();
    }
    for(int i=0;i<9;i++) {
        for(int j=0;j<A.size();j++)
            if(track.find(A[j][i])!=track.end())
                return 0;
            else if(A[j][i]!='.')
                track[A[j][i]] = 1;
        track.clear();
    }
    for(int k=0;k<3;k++) {
        for(int l=0;l<3;l++) {
            for(int i=3*k;i<3*(k+1);i++) {
                    for(int j=3*l;j<3*(l+1);j++)
                        if(track.find(A[i][j])!=track.end())
                            return 0;
                        else if(A[i][j]!='.')
                            track[A[i][j]] = 1;
            }
            track.clear();
        }
        track.clear();
    }
    return 1;
}