#include <ext/rope>
#include<bits/stdc++.h>
using namespace __gnu_cxx;

using namespace std;

void print(rope<int> v) {
    for(auto it = v.mutable_begin(); it != v.mutable_end(); ++it)
        cout << *it << " ";
    cout<<endl;
}

int main()
{
    rope<int> v;
    vector<int> kekw = {1,2,3,4,5,6,7,8,9,10};
    vector<vector<int>> query = {{1,3,7,10},{2,5,6,7},{3,3,5,10}};
    for(auto i : kekw) v.push_back(i);
    
    for(auto q : query) {
        int l1 = q[0]-1;
        int r1 = q[1] -1;
        int l2 = q[2]-1;
        int r2 = q[3]-1;
        int len1 = r1-l1+1;
        int len2 = r2-l2+1;

        rope<int> n1 = v.substr(l1, len1);
        rope<int> n2 = v.substr(l2, len2);

        v.erase(l1, len1);
        v.insert(v.mutable_begin()+l1, n2);
        
        int pos = l2 - len1 + len2;
        v.erase(pos, len2);
        
        v.insert(v.mutable_begin()+pos, n1);
        print(v);
    }
    print(v);
    return 0;
}
