#include<bits/stdc++.h>
using namespace std;

int search(int value, int a[]) {

    cout<<int(a[0]);
    if(value < a[0]) {
        return a[0];
    }
    if(value > a[sizeof(a)-1]) {
        return a[sizeof(a)-1];
    }

    int lo = 0;
    int hi = a.length - 1;

    while (lo <= hi) {
        int mid = (hi + lo) / 2;

        if (value < a[mid]) {
            hi = mid - 1;
        } else if (value > a[mid]) {
            lo = mid + 1;
        } else {
            return a[mid];
        }
    }
    // lo == hi + 1
    return (a[lo] - value) < (value - a[hi]) ? a[lo] : a[hi];
}
