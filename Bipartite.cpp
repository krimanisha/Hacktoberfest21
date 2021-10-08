#include<bits/stdc++.h>
using namespace std;

//using DFS algorithm
//Time Complexity O(n+e)
//Space Complexity O(n+e)+O(n)+O(n)

class Solution {
public:
    bool bipartiteDFS(int node,vector<int>adj[],vector<int>&color)
    {
        for(auto it:adj[node])
        {
            if(color[it]==-1)
            {
                color[it]=1-color[node];
                if(!bipartiteDFS(it,adj,color))
                return false;
            }
            else if(color[it]==color[node])
            return false;
        }
        return true;
    }
public:
	bool isBipartite(int v, vector<int>adj[]){
	   vector<int>color(v,-1);
	   for(int i=0;i<v;i++)
	   {
	       if(color[i]==-1)
	       {
	           if(!bipartiteDFS(i,adj,color))
	           return false;
	       }
	   }
	   return true;
	}

};

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  


//BFS algo solution
/*
   bool bipartiteBFS(int src,vector<int>adj[],vector<int>&color)
    {
       queue<int>q;
    q.push(src); 
    color[src] = 1; 
    while(!q.empty()) {
        int node = q.front(); 
        q.pop();
        
        for(auto it : adj[node]) {
            if(color[it] == -1) {
                color[it] = 1 - color[node]; 
                q.push(it); 
            } else if(color[it] == color[node]) {
                return false; 
            }
        }
    }
    return true;
    }
public:
	bool isBipartite(int v, vector<int>adj[]){
	   vector<int>color(v,-1);
	   for(int i=0;i<v;i++)
	   {
	       if(color[i]==-1)
	       {
	           if(!bipartiteBFS(i,adj,color))
	           return false;
	       }
	   }
	   return true;
	}
*/