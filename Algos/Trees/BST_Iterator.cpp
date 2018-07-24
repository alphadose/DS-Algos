class BSTIterator {
    public:
        stack<TreeNode *> myStack;

        BSTIterator(TreeNode *root) {
            pushAll(root);
        }

        /** @return whether we have a next smallest number */
        bool hasNext() {
            return !myStack.empty();
        }

        /** @return the next smallest number */
        int next() {
            TreeNode *tmpNode = myStack.top();
            myStack.pop();
            pushAll(tmpNode->right);
            return tmpNode->val;
        }

    private:
        void pushAll(TreeNode *node) {
            while (node != NULL) {
                myStack.push(node);
                node = node->left;
            }
        }
};