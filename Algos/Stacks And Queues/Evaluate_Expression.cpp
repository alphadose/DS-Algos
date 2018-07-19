int Solution::evalRPN(vector<string> &A) {
    vector<string> ops;
    int first, second;
    for(int i=0;i<A.size();i++) {
        if(A[i]!="+" && A[i]!="-" && A[i]!="*" && A[i]!="/") {
            ops.push_back(A[i]);
            continue;
        }
        switch(A[i][0]) {
            case '+':
                second = stoi(ops.back());
                ops.pop_back();
                first = stoi(ops.back());
                ops.pop_back();
                ops.push_back(to_string(first+second));
                break;
            case '-':
                second = stoi(ops.back());
                ops.pop_back();
                first = stoi(ops.back());
                ops.pop_back();
                ops.push_back(to_string(first-second));
                break;
            case '/':
                second = stoi(ops.back());
                ops.pop_back();
                first = stoi(ops.back());
                ops.pop_back();
                ops.push_back(to_string(first/second));
                break;
            case '*':
                second = stoi(ops.back());
                ops.pop_back();
                first = stoi(ops.back());
                ops.pop_back();
                ops.push_back(to_string(first*second));
                break;
            default:
               ops.push_back(A[i]);
               break;
        }
    }
    return stoi(ops[0]);
}