/**
 * Definition for undirected graph.
 * struct UndirectedGraphNode {
 *     int label;
 *     vector<UndirectedGraphNode *> neighbors;
 *     UndirectedGraphNode(int x) : label(x) {};
 * };
 */
UndirectedGraphNode* dfs(UndirectedGraphNode* orig, UndirectedGraphNode* duplicate, map<UndirectedGraphNode*, UndirectedGraphNode*> &track) {
    duplicate = new UndirectedGraphNode(orig->label);
    track[orig] = duplicate;
    for(int i=0;i<orig->neighbors.size();i++) {
        if(track.find(orig->neighbors[i])==track.end())
            duplicate->neighbors.push_back(dfs(orig->neighbors[i], duplicate, track));
        else
            duplicate->neighbors.push_back(track[orig->neighbors[i]]);
    }
    return duplicate;
}
UndirectedGraphNode *Solution::cloneGraph(UndirectedGraphNode *node) {
    map<UndirectedGraphNode*, UndirectedGraphNode*> track;
    UndirectedGraphNode* duplicate;
    duplicate = dfs(node, duplicate, track);
    return duplicate;
}
