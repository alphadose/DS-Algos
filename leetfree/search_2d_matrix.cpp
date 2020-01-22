#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int bs_lower_bound_2(vector<vector<int>> &a, int x) {
    int l = 0;
    int h = a.size(); // Not n - 1
    int last = a[0].size() - 1;
    while (l < h) {
        int mid = (l + h) / 2;
        if ( x <= a[mid][last]) {
            h = mid;
        } else {
            l = mid + 1;
        }
    }
    return min(l, int(a.size())-1);
}

int bs_lower_bound(vector<vector<int>> &a, int x) {
    int l = 0;
    int h = a.size(); // Not n - 1
    while (l < h) {
        int mid = (l + h) / 2;
        if ( x <= a[mid][0]) {
            h = mid;
        } else {
            l = mid + 1;
        }
    }
    return min(l, int(a.size())-1);
}
    
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    if(matrix.size() == 0) return false;
    if(matrix[0].size() == 0) return false;
    
    int first = bs_lower_bound(matrix, target);
    int second = bs_lower_bound_2(matrix, target);
    
    for(int i = min(first, second); i<=min(max(first, second+1), int(matrix.size()-1)); i++)
        if(binary_search(matrix[i].begin(), matrix[i].end(), target))
            return true;
    
    return false;
}
};


// JAVA - best soln

public class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        if(matrix == null || matrix.length < 1 || matrix[0].length <1) {
            return false;
        }
        int col = matrix[0].length-1;
        int row = 0;
        while(col >= 0 && row <= matrix.length-1) {
            if(target == matrix[row][col]) {
                return true;
            } else if(target < matrix[row][col]) {
                col--;
            } else if(target > matrix[row][col]) {
                row++;
            }
        }
        return false;
    }
}
