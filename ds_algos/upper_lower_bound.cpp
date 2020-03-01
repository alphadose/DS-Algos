#include<bits/stdc++.h>
using namespace std;

int bs_upper_bound(vector<int> a, int x) {
    int l = 0;
    int h = a.size(); // Not n - 1
    while (l < h) {
        int mid = (l + h) / 2;
        if (x >= a[mid]) {
            l = mid + 1;
        } else {
            h = mid;
        }
    }
    return l;
}

int bs_lower_bound(vector<int> a, int x) {
    int l = 0;
    int h = a.size(); // Not n - 1
    while (l < h) {
        int mid = (l + h) / 2;
        if (x <= a[mid]) {
            h = mid;
        } else {
            l = mid + 1;
        }
    }
    return l;
}