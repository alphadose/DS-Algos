#include<bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node *left, *right;
    Node(int v): val(v), left(NULL), right(NULL) {}
};

void preorder(Node* root) {
    if(root == NULL) return;
    cout<<root->val<<endl;
    preorder(root->left);
    preorder(root->right);
}

int main() {
    string tree = "4(2(3)(1))(6(5))";
    stack<Node*> st;

    st.push(new Node(tree[0]-48));

    for(int i = 1; i<tree.size(); i++) {
        if(tree[i] == '(') {
            i++;
            Node* n = new Node(tree[i]-48);
            if(st.top()->left == NULL) st.top()->left = n;
            else st.top()->right = n;
            st.push(n);
        }  else if(tree[i] == ')') {
            st.pop();
        }
    }

    preorder(st.top());
}
