struct Node {
    int val;
    int min;
    Node(int a, int b) : val(a), min(b) {}
};

vector<Node> ans;
int mini;

MinStack::MinStack() {
    ans.clear();
    mini = INT_MAX;
}

void MinStack::push(int x) {
    mini = min(mini, x);
    Node tmp(x, mini);
    ans.push_back(tmp);
}

void MinStack::pop() {
    if(!ans.empty()) {
        ans.pop_back();
        if(!ans.empty())
            mini = ans.back().min;
        else
            mini = INT_MAX;
    }
}

int MinStack::top() {
    if(!ans.empty())
        return ans.back().val;
    else
        return -1;
}

int MinStack::getMin() {
    if(ans.empty())
        return -1;
    return ans.back().min;
}
