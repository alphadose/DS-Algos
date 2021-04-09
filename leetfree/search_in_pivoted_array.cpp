#include<bits/stdc++.h>
using namespace std;

int findPivot(vector<int> &A) {
    int low = 0, high = A.size() - 1;
    while(low <= high) {
        int mid = low + (high-low)/2;
        if(A[mid] > A[mid-1] && A[mid] > A[mid+1]) return mid;

        if(A[mid] > A[low] && A[mid] > A[high]) low = mid + 1;
        else if(A[mid] < A[low] && A[mid] < A[high]) high = mid - 1;
    }
    return low;
}

int main() {
    vector<int> A = {5, 1,2,3,4};
    int to_find = 3;
    int pivot = findPivot(A) + 1;

    auto it1 = lower_bound(A.begin(), A.begin()+pivot, to_find);
    auto it2 = lower_bound(A.begin()+pivot, A.end(), to_find);

    int index = -1;

    if(binary_search(A.begin(), A.begin()+pivot, to_find)) {
        index = it1 - A.begin();
    } else if(binary_search(A.begin()+pivot, A.end(), to_find)) {
        index = it2 - A.begin();
    }

    cout<<index;
}