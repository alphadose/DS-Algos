#include<bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node *left, *right;
    Node(int v): val(v), left(NULL), right(NULL) {}
};

void get_left_edges(Node *A, map<int, vector<Node*>> &edge_map, int level) {
    if(A == NULL) return;
    edge_map[level].push_back(A);
    if(A->left != NULL) get_left_edges(A->left, edge_map, level+1);
    else get_left_edges(A->right, edge_map, level+1);
}

void get_right_edges(Node *A, map<int, vector<Node*>> &edge_map, int level) {
    if(A == NULL) return;
    edge_map[level].push_back(A);
    if(A->right != NULL) get_right_edges(A->right, edge_map, level+1);
    else get_right_edges(A->left, edge_map, level+1);
}

void get_width(Node *A, map<int, int> &level_map, map<int, vector<Node*>> &edge_map, int level, int max_level) {
    if(level == max_level) return;

    if(A == NULL) {
        int a = 2;
        for(int l = level+1; l<=max_level; ++l) {
            level_map[l] += a;
            a*=2;
        }
        return;
    }

    if(A->right == edge_map[level+1][0] && A->left == NULL) {
        level_map[level+1] += 1;
        get_width(A->right, level_map, edge_map, level+1, max_level);
    } else if(A->left == edge_map[level+1][1] && A->right == NULL) {
        level_map[level+1] += 1;
        get_width(A->left, level_map, edge_map, level+1, max_level);
    } else {
        level_map[level+1] += 2;
        get_width(A->left, level_map, edge_map, level+1, max_level);
        get_width(A->right, level_map, edge_map, level+1, max_level);
    }
}

int main() {
    map<int, vector<Node*>> edge_map;
    
    // Node* a = new Node(1);
    // Node* b = new Node(3);
    // Node* c = new Node(2);
    // Node* d = new Node(5);
    // Node* e = new Node(3);
    // Node* f = new Node(9);

    // a->left = b;
    // a->right = c;
    // b->left = d;
    // b->right = e;
    // c->right = f;

    Node* a = new Node(1);
    Node* b = new Node(3);
    Node* c = new Node(2);
    Node* d = new Node(5);
    Node* e = new Node(9);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left = b;
    a->right = c;

    b->left = d;
    d->left = f;

    c->right = e;
    e->right = g;

    get_left_edges(a, edge_map, 0);
    get_right_edges(a, edge_map, 0);

    map<int, int> level_map;
    get_width(a, level_map, edge_map, 0, edge_map.size()-1);


    for(auto i : level_map) {
        cout<<i.first<<" "<<i.second<<endl;
    }
}
