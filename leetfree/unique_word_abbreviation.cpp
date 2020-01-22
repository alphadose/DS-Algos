#include<bits/stdc++.h>
using namespace std;

string abbreviate(string s) {
    if(s.length() < 3) return s;
    return s.front() + to_string(s.length()-2) + s.back();
}

bool isUnique(string s, set<string> &dict) {
    map<string, int> unique_count;
    for(auto entry : dict) unique_count[abbreviate(entry)]++;
    if(dict.find(s) == dict.end()) {
        return unique_count[abbreviate(s)] == 0 ? 1 : 0;
    }
    return unique_count[abbreviate(s)] == 1 ? 1 : 0;
}

struct kek {
    int i;
    kek(int x): i(x) {}
};

int main() {
    // set<string> dict = {"deer", "door", "cake", "card"};
    // cout<<isUnique("deer", dict)<<endl;
    // cout<<isUnique("cart", dict)<<endl;
    // cout<<isUnique("cane", dict)<<endl;
    // cout<<isUnique("make", dict)<<endl;
    // int arr[] = {1, 2 ,3};
    // for(int n: arr) cout<<n<<endl;

    vector<kek> meow = {kek(1), kek(2), kek(3)};
    for(auto it = meow.begin(); it != meow.end(); ++it) {
        cout<<it->i<<endl;
    }
}
