#include<bits/stdc++.h>
using namespace std;

pair<int, int> search() {
    vector<vector<int>> matrix = {
        {-3, 1, 31, 40},
        {10, 33 ,40, 660},
        {22, 43, 161, 702}
    };
    int target = 31;
    if(matrix.size() < 1 || matrix[0].size() <1){
        return make_pair(-1, -1);
    }
    int col = matrix[0].size()-1;
    int row = 0;
    while(col >= 0 && row <= matrix.size()-1){
        if(target == matrix[row][col]) {
            return make_pair(row, col);
        } else if(target < matrix[row][col]){
            col--;
        } else if(target > matrix[row][col]){
            row++;
        }
    }
    return make_pair(-1, -1);
}

int main() {
    cout<<search().first;
}
