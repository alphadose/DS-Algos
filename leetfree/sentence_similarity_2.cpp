#include<bits/stdc++.h>
using namespace std;

void build(string original_node, string node, map<string, set<string>> &graph, set<string> &visited) {
    visited.insert(node);
    graph[original_node].insert(node);
    for(auto adjacent_node : graph[node]) {
        if(visited.find(adjacent_node) == visited.end()) {
            build(original_node, adjacent_node, graph, visited);
        }
    }
}

bool similar(vector<string> words1, vector<string> words2, vector<pair<string, string>> pairs) {
    if(words1.size() != words2.size()) return false;

    map<string, set<string>> graph;
    for(auto pair: pairs) {
        graph[pair.first].insert(pair.second);
        graph[pair.second].insert(pair.first);
    }
    set<string> visited;
    for(auto node : graph) {
        visited.clear();
        build(node.first, node.first, graph, visited);
    }

    for(int i=0; i<words1.size(); i++) {
        if(graph.find(words1[i]) == graph.end() ||
           graph.find(words2[i]) == graph.end() ||
           graph[words1[i]].find(words2[i]) == graph[words1[i]].end())
        return false;
    }
    for(auto node : graph) {
        cout<<node.first<<": ";
        for(auto adjacent_node: node.second) {
            cout<<adjacent_node<<" ";
        }
        cout<<endl;
    }
    return true;
}

int main() {
    vector<string> words1 = {"great", "acting", "skills"};
    vector<string> words2 = {"fine", "drama", "talent"};
    vector<pair<string, string>> pairs = {{"great", "good"}, {"fine", "good"}, {"acting","drama"}, {"skills","talent"}};
    cout<<similar(words1, words2, pairs);
    // map<int, int> kekw;
    // cout<< kekw[1];
}

