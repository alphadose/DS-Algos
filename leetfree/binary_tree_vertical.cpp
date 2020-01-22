#include<bits/stdc++.h>

using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;
    Node(int x) : val(x), left(NULL), right(NULL) {}
};

void travserse(Node* A, map<int, vector<int> > &store, int col) {
    if (A == NULL) return;

    store[col].push_back(A->val);
    travserse(A->left, store, col-1);
    travserse(A->right, store, col+1);
}

int main() {
    map<int, vector<int> > store;

    auto first = new Node(3);
    auto second = new Node(9);
    auto third = new Node(20);
    auto fourth = new Node(15);
    auto fifth = new Node(7);

    first->left = second;
    first->right = third;
    third->left = fourth;
    third->right = fifth;

    travserse(first, store, 0);
    for(auto s : store) {
        for(auto k : s.second) {
            cout<<k<<" ";
        }
        cout<<endl;
    }
    cout<<char('A'+32);
}
