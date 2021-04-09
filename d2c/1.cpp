#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

struct node {
    string s;
    int p;
    int identity;
    node(string k, int m, int i): s(k), p(m), identity(i) {}
};

struct cmp {
    bool operator()(node a, node b) {
        if(a.s == b.s) return a.p < b.p;
        return (a.s).compare(b.s) > 0;
    }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int c = 1;
    priority_queue<node, vector<node>, cmp> heap;
    while(n--) {
        string s;
        cin>>s;
        int p;
        cin>>p;
        heap.push(node(s, p, c++));
    }
    while(!heap.empty()) {
        cout<<heap.top().identity<<endl;
        heap.pop();
    }
    return 0;
}
