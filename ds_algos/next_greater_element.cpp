#include<bits/stdc++.h>
using namespace std;

int main() {
    // vector<int> A = {4, 5, 2, 25};
    vector<int> A = {13, 7, 6, 12};
    int max_val = A.back();
    vector<int> dp(A.size(), 0);

    dp[A.size() - 1] = -1;
    stack<int> st;
    st.push(A.size() - 1);

    for(int i = A.size() - 2; i>=0; i--) {
        while(!st.empty() && A[i] > A[st.top()])
            st.pop();
        
        dp[i] = (st.empty())?-1:A[st.top()];
        st.push(i);
    }

    for(auto i : dp) cout<<i<<endl;
}
