#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> A = {1, 1, 1, 4, 2, 1, 5, 3};
    int sum = accumulate(A.begin(), A.end(), 0);

    int left = 0, right = A.size() - 1;
    int leftsum = A.front(), rightsum = A.back();

    while(right - left > 2) {
        if(leftsum == rightsum) {
            if(sum - A[left+1] - A[right - 1] == 3*leftsum) break;
            left++;
            right--;
        } else if(leftsum > rightsum) {
            rightsum += A[--right];
        } else {
            leftsum += A[++left];
        }
    }
    for(int i = 0;i<=left;i++) cout<<A[i]<<" ";
    cout<<endl;
    for(int i = left+2;i<=right-2;i++) cout<<A[i]<<" ";
    cout<<endl;
    for(int i = right;i<A.size();i++) cout<<A[i]<<" ";
    cout<<endl;
    cout<<string("abc").find('d');
}
