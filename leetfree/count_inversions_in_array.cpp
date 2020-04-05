#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

typedef tree<int, null_type, greater<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

int main() {
    int arr[] = { 1, 20, 6, 4, 5 };
    int n = sizeof(arr)/sizeof(int);
    int count = 0;

    ordered_set store;
    for(int a : arr) {
        count += store.order_of_key(a);
        store.insert(a);
    }
    cout<<count;
}
