#include <bits/stdc++.h> 
using namespace std; 
  
// A binary Tree node 
struct node 
{ 
    int data; 
    struct node *left, *right; 
}; 
  
/* Recursive function to print all the nodes at distance k in the 
   tree (or subtree) rooted with given root. See  */
void printkdistanceNodeDown(node *root, int k) 
{ 
    // Base Case 
    if (root == NULL || k < 0)  return; 
  
    // If we reach a k distant node, print it 
    if (k==0) 
    { 
        cout << root->data << endl; 
        return; 
    } 
  
    // Recur for left and right subtrees 
    printkdistanceNodeDown(root->left, k-1); 
    printkdistanceNodeDown(root->right, k-1); 
} 
  
// Prints all nodes at distance k from a given target node. 
// The k distant nodes may be upward or downward.  This function 
// Returns distance of root from target node, it returns -1 if target 
// node is not present in tree rooted with root. 
int printkdistanceNode(node* root, node* target , int k) 
{ 
    // Base Case 1: If tree is empty, return -1 
    if (root == NULL) return -1; 
  
    // If target is same as root.  Use the downward function 
    // to print all nodes at distance k in subtree rooted with 
    // target or root 
    if (root == target) 
    { 
        printkdistanceNodeDown(root, k); 
        return 0; 
    } 
  
    // Recur for left subtree 
    int dl = printkdistanceNode(root->left, target, k); 
  
    // Check if target node was found in left subtree 
    if (dl != -1) 
    { 
         // If root is at distance k from target, print root 
         // Note that dl is Distance of root's left child from target 
         if (dl + 1 == k) 
            cout << root->data << endl; 
  
         // Else go to right subtree and print all k-dl-2 distant nodes 
         // Note that the right child is 2 edges away from left child 
         else
            printkdistanceNodeDown(root->right, k-dl-2); 
  
         // Add 1 to the distance and return value for parent calls 
         return 1 + dl; 
    } 
  
    // MIRROR OF ABOVE CODE FOR RIGHT SUBTREE 
    // Note that we reach here only when node was not found in left subtree 
    int dr = printkdistanceNode(root->right, target, k); 
    if (dr != -1) 
    { 
         if (dr + 1 == k) 
            cout << root->data << endl; 
         else
            printkdistanceNodeDown(root->left, k-dr-2); 
         return 1 + dr; 
    } 
  
    // If target was neither present in left nor in right subtree 
    return -1; 
} 
  
// A utility function to create a new binary tree node 
node *newnode(int data) 
{ 
    node *temp = new node; 
    temp->data = data; 
    temp->left = temp->right = NULL; 
    return temp; 
} 

void construct_graph(node* root, unordered_map<node*, vector<node*>> &graph) {
    if(root == NULL) return;

    if(root->left != NULL) {
        graph[root].push_back(root->left);
        graph[root->left].push_back(root);
    }
    if(root->right != NULL) {
        graph[root].push_back(root->right);
        graph[root->right].push_back(root);
    }

    construct_graph(root->left, graph);
    construct_graph(root->right, graph);
}

struct bfs_node {
    node* n;
    int dist;
    bfs_node(node* k, int d): n(k), dist(d) {}
};

void printkdistanceNode2(node* root, node* target, int k) {
    unordered_map<node*, vector<node*>> graph;
    construct_graph(root, graph);

    vector<node*> ans;
    unordered_set<node*> visited;
    queue<bfs_node> q;

    q.push(bfs_node(target, 0));
    visited.insert(target);

    while(!q.empty()) {
        auto p = q.front();
        q.pop();

        if(p.dist > k) break;

        if(p.dist == k) ans.push_back(p.n);

        for(auto adjacent_node : graph[p.n]) {
            if(visited.find(adjacent_node) != visited.end()) continue;

            visited.insert(adjacent_node);
            q.push(bfs_node(adjacent_node, p.dist+1));
        }
    }

    for(auto n : ans) {
        cout<<n->data<<endl;
    }
}

// Driver program to test above functions 
int main() 
{ 
    /* Let us construct the tree shown in above diagram */
    node * root = newnode(20); 
    root->left = newnode(8); 
    root->right = newnode(22); 
    root->left->left = newnode(4); 
    root->left->right = newnode(12); 
    root->left->right->left = newnode(10); 
    root->left->right->right = newnode(14); 
    node * target = root->left->right; 
    // printkdistanceNode2(root, target, 2); //ans 4 20
    // printkdistanceNode2(root, root->left, 2); //ans 10 14 22
    printkdistanceNode2(root, root->left->right->right, 3); //ans 4 20
    return 0; 
}
