#include <bits/stdc++.h> 
using namespace std; 
  
// structure node 
struct Node { 
    int key; 
    struct Node* left; 
    struct Node* right; 
}; 
  
// Utility function to create a new node 
struct Node* newNode(int key) 
{ 
    struct Node* node = new Node(); 
    node->left = NULL; 
    node->right = NULL; 
    node->key = key; 
  
    return node; 
} 

struct holder {
    int turns, length;
    holder(int t, int l): turns(t), length(l) {}
};

holder findMaxBendsUtil(Node* node, bool left, bool right) { 
    if(node == NULL) return holder(0, 0);
    holder h(0, 0);

    holder right_holder = findMaxBendsUtil(node->right, false, true);
    holder left_holder = findMaxBendsUtil(node->left, true, false);

    if(left) {
        right_holder.turns += (node->right != NULL);
    } else if(right) { 
        left_holder.turns += (node->left != NULL);
    }

    h = (right_holder.turns > left_holder.turns)?right_holder:left_holder;
    h.length += 1;

    return h;
} 
  
 
  
// Driver code 
int main() { 
    /* Constructed binary tree is 
      10 
      / \ 
     8    2 
    / \  / 
    3  5 2 
          \ 
           1 
          / 
         9 
    */
  
    struct Node* root = newNode(10); 
    root->left = newNode(8); 
    root->right = newNode(2); 
    root->left->left = newNode(3); 
    root->left->right = newNode(5); 
    root->right->left = newNode(2); 
    root->right->left->right = newNode(1); 
    root->right->left->right->left = newNode(9); 
  
    cout << findMaxBendsUtil(root, false, false).length - 1<<endl; 
    cout << findMaxBendsUtil(root, false, false).turns<<endl; 

    return 0; 
} 
