#include<bits/stdc++.h>
using namespace std;

bool comparator(pair<int, int> p1, pair<int, int> p2) {
        return (p1.first + p1.second)/2 > (p2.first + p2.second)/2;
}

int main() {

    auto compare = [](pair<int, int> p1, pair<int, int> p2) {
        return (p1.first + p1.second)/2 > (p2.first + p2.second)/2;
    };

    // priority_queue<pair<int, int>, vector<pair<int, int>>, function<bool(pair<int, int> p1, pair<int, int> p2)>> kek(comparator);
    // priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(compare)> kek(compare);
    priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(&comparator)> kek(comparator);
    kek.push({1, 3});
    kek.push(make_pair(2 , 6));
    kek.push(make_pair(69, 69));
    kek.push(make_pair(10 , 11));
    kek.push(make_pair(1, 1));

    cout<<kek.top().first<<" "<<kek.top().second;

    // set<int> A = {3,4,2,-1};
    // cout<< *(A.begin())<<endl;

    // for(auto i : A) cout<<i<<endl;
}

// In design problems always use classes
