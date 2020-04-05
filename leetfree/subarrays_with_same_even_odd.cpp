#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {3, 4, 6, 8, 1, 10, 5, 7};
    for(int &a : arr)
        if(a % 2 == 0)
            a = -1;
        else
            a = 1;
    
    int n = sizeof(arr)/sizeof(int);
    unordered_map<int, int> store;
    int count = 0;

    for(int i = 1; i< n; i++) arr[i] += arr[i-1];

    for(int a : arr) {
        if(a == 0) count++;

        count += store[a]++;
    }  

    cout<<count;
}
