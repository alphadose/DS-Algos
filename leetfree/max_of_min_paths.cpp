#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> A = {{5, 1},{4, 5}};

    for(int i = 2; i< A[0].size(); i++) A[0][i] = min(A[0][i], A[0][i-1]);

    for(int i = 2; i< A.size(); i++) A[i][0] = min(A[i][0], A[i-1][0]);

    for(int i= 1; i <A.size(); i++) {
        for(int j = 1; j<A[0].size(); j++) {
            if(i == A.size()-1 && j == A[0].size()-1) break;
            A[i][j] = min(A[i][j], max(A[i-1][j], A[i][j-1]));
        }
    }

    A[A.size()-1][A[0].size()-1] = max(A[A.size()-2][A[0].size()-1], A[A.size()-1][A[0].size()-2]);

    cout<<A.back().back();
}
