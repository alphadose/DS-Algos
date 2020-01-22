#include<bits/stdc++.h>
using namespace std;

void countCycles(int node, map<int, set<int>> &edgeMap, set<int> &visited, int &cycles) {
    visited.insert(node);
    for(auto adjancent_node : edgeMap[node]) {
        if(visited.find(adjancent_node) != visited.end()) {
            cycles++;
            continue;
        }
        countCycles(adjancent_node, edgeMap, visited, cycles);
    }
}

int main() {
    map<int, set<int>> edgeMap;
    vector<pair<int,int>> edges = {{0, 1}, {0, 2}, {0, 3}, {1, 4}};
    // vector<pair<int,int>> edges = {{0, 1}, {1, 2}, {2, 3}, {1, 3}, {1, 4}};
    for(auto edge : edges) edgeMap[edge.first].insert(edge.second);

    // int cycles = 0;
    // set<int> visited;
    // countCycles(edges.front().first, edgeMap, visited, cycles);
    // cout<<cycles<<endl;

    // make sure all components are connected

    // string compare doesn't compare as integers but character by character
    // string str= "12";
    // cout<<str.compare("103");

    // multiset<int> kekw;
    // kekw.insert(9);
    // cout<< *(kekw.begin());

    // kekw.insert(10);
    // cout<< *(kekw.begin());

    // kekw.insert(8);
    // cout<< *(kekw.begin());
}