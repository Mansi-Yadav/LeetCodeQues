class Solution {
public:
    bool dfs_bipartite(int node, vector<vector<int>> &graph, int color[]){
        if(color[node] == -1)
            color[node]=1;
        
        for(auto it: graph[node]){
            if(color[it] == -1){
                
                color[it] = 1- color[node];
                
                if(!dfs_bipartite(it, graph, color))
                    return false;
            }
            else if(color[it] == color[node])
                return false;
        }
        return true;
        
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        int color[graph.size()];
        memset(color, -1, sizeof(color));
        
        for(int i=0; i<graph.size(); i++){
            if(color[i] == -1){
                if(!dfs_bipartite(i, graph, color))
                    return false;
            }
            
        }
        return true;
    }
};