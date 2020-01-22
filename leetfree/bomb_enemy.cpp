#include<bits/stdc++.h>
using namespace std;

struct Interval {
    int start;
    int end;
    int count;
    Interval(int s, int e, int c): start(s), end(e), count(c) {}
};

int main() {
    char grid[4][4] = {
        {'0', 'E', '0', '0'},
        {'E', '0', 'W', 'E'},
        {'0', 'E', '0', '0'},
    };

   int col_count[4][4] = {0};
   int row_count[4][4] = {0};

   for(int i=0;i<3;i++) {
       vector< Interval> wall;
       wall.clear();
       int count = 0;
       int start = 0;
       for(int j=0;j<4;j++) {
           if(grid[i][j]=='E') count++;
           else if(grid[i][j]=='W') {
               wall.push_back(Interval(start, j-1, count));
               start = j+1;
               count = 0;
           }
       }
    wall.push_back(Interval(start, 3, count));
    for(auto val : wall) {
        for(int k=val.start; k<=val.end;k++) col_count[i][k] = val.count;
    }
   }

   for(int i=0;i<4;i++) {
       vector< Interval> wall;
       wall.clear();
       int count = 0;
       int start = 0;
       for(int j=0;j<3;j++) {
           if(grid[j][i]=='E') count++;
           else if(grid[j][i]=='W') {
               wall.push_back(Interval(start, j-1, count));
               start = j+1;
               count = 0;
           }
       }
    wall.push_back(Interval(start, 2, count));
    for(auto val : wall) {
        for(int k=val.start; k<=val.end;k++) row_count[k][i] = val.count;
    }
   }

   int maxi = INT_MIN;
   int x, y;

   for(int i=0;i<3;i++) {
       for(int j=0;j<4;j++) {
        if(row_count[i][j]+col_count[i][j] > maxi && grid[i][j]=='0') {
            maxi = row_count[i][j]+col_count[i][j];
            x = i;
            y=j;
        }
       }
   } 
   cout<<x<<endl<<y;  
}