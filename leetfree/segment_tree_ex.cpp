#include<bits/stdc++.h>
using namespace std;

class SegTree {
    vector<int> A, tree;
    int start, end;

    void build(int node, int start, int end) {
        if(start == end) {
            // Leaf node will have a single element
            tree[node] = A[start];
        }
        else {
            int mid = (start + end) / 2;
            // Recurse on the left child
            build(2*node, start, mid);
            // Recurse on the right child
            build(2*node+1, mid+1, end);
            // Internal node will have the sum of both of its children
            tree[node] = tree[2*node] + tree[2*node+1];
        }
    }

    void update(int node, int start, int end, int idx, int val) {
        if(start == end) {
            // Leaf node
            A[idx] += val;
            tree[node] += val;
        } else {
            int mid = (start + end) / 2;
            if(start <= idx && idx <= mid) {
                // If idx is in the left child, recurse on the left child
                update(2*node, start, mid, idx, val);
            } else {
                // if idx is in the right child, recurse on the right child
                update(2*node+1, mid+1, end, idx, val);
            }
            // Internal node will have the sum of both of its children
            tree[node] = tree[2*node] + tree[2*node+1];
        }
    }

    int query(int node, int start, int end, int l, int r) {
        if(r < start || end < l) {
            // range represented by a node is completely outside the given range
            return 0;
        }
        if(l <= start && end <= r) {
            // range represented by a node is completely inside the given range
            return tree[node];
        }
        // range represented by a node is partially inside and partially outside the given range
        int mid = (start + end) / 2;
        int p1 = query(2*node, start, mid, l, r);
        int p2 = query(2*node+1, mid+1, end, l, r);
        return (p1 + p2);
    }

    public:

    SegTree(vector<int> arr) {
        A = arr;
        tree.resize(A.size()*4+1);
        fill(tree.begin(), tree.end(), 0);
        start = 0;
        end = arr.size() - 1;
        build(1, start, end);
    }

    int query(int l, int r) {
        return query(1, start, end, l, r);
    }

    void update(int idx, int val) {
        update(1, start, end, idx, val);
    }
};

int main() {
    vector<int> A = {1, 2, 3, 4, 5};
    auto segTree = SegTree(A);
    cout<<segTree.query(1, 2)<<endl;
    segTree.update(1, -2);
    cout<<segTree.query(1, 2)<<endl;
    // update(1, 0, 4, 1, 3);
    // cout<<query(1, 0, 4, 0, 1)<<endl;
}
