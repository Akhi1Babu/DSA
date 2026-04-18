class Solution {
private:
    bool bfs(int i,vector<int> adj[],vector<int>& vis,vector<int> &color){
        vis[i]=1;
        int c=0;
        color[i]=c;
        c=!c;
        queue<int> que;
        que.push(i);
        while(!que.empty()){
            int node=que.front();
            que.pop();
            for(auto it:adj[node]){
                if(vis[it]==0){
                    vis[it]=1;
                    color[it]=!color[node];
                
                    que.push(it);
                }
                else if(vis[it]==1){
                    if(color[it]==color[node]){
                        return false;
                    }
                }
            }
        }
        return true;


    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> adj[n];
        bool ans=false;
        //setting the adjacency list...
        for(int i=0;i<n;i++){
            for(int j=0;j<graph[i].size();j++){
                adj[i].push_back(graph[i][j]);
            }
        }
        vector<int> vis(n);
        vector<int> color(n);
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                
               ans=  bfs(i,adj,vis,color);
               if(ans==false){
                return false;
               }
            }
        }
        return true;
    }
};