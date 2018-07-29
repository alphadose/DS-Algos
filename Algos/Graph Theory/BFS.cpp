public void bfs() {
    //BFS uses Queue data structure
    Queue q = new LinkedList();
    q.add(this.rootNode);
    printNode(this.rootNode);
    rootNode.visited = true;
    while(!q.isEmpty()) {
        Node n = (Node)q.remove();
        Node child = null;
        while((child = getUnvisitedChildNode(n)) != null) {
            child.visited = true;
            printNode(child);
            q.add(child);
        }
    }
    //Clear visited property of nodes
    clearNodes();
}

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

vector <int> v[10] ;   //Vector for maintaining adjacency list explained above
int level[10]; //To determine the level of each node
bool vis[10]; //Mark the node if visited 
void bfs(int s) {
    queue <int> q;
    q.push(s);
    level[ s ] = 0 ;  //Setting the level of the source node as 0
    vis[ s ] = true;
    while(!q.empty())
    {
        int p = q.front();
        q.pop();
        for(int i = 0;i < v[ p ].size() ; i++)
        {
            if(vis[ v[ p ][ i ] ] == false)
            {
        //Setting the level of each node with an increment in the level of parent node
                level[ v[ p ][ i ] ] = level[ p ]+1;                 
                    q.push(v[ p ][ i ]);
                    vis[ v[ p ][ i ] ] = true;
            }
        }
    }
}