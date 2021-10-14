#include <bits/stdc++.h>
using namespace std;

void dfs(int node, stack<int> &st, vector<int> &vis, vector<int> adj[])
{
    vis[node] = 1;

    // traversing all the adjacent nodes
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(it, st, vis, adj);
        }
    }
    st.push(node);
}

void reverseDFS(int node, vector<int> &vis, vector<int> transpose[])
{
    cout << node << " ";
    vis[node] = 1;
    for (auto it : transpose[node])
    {
        if (!vis[it])
        {
            reverseDFS(it, vis, transpose);
        }
    }
}

int main()
{
    int n, m;
    cout << "Enter the number of nodes and edges: ";
    cin >> n >> m;

    // declare the adjacent list
    vector<int> adj[n + 1];

    // take edges as input
    cout << "Enter the edges of the graph\n";
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    // Graph starts from 0
    // topological sort
    stack<int> st;
    vector<int> vis(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i, st, vis, adj);
        }
    }

    // transpose of a graph -> reverse all the edges
    vector<int> transpose[n + 1];
    for (int i = 0; i < n; i++)
    {
        vis[i] = 0;
        for (auto it : adj[i]) // edge between i to it
        {
            transpose[it].push_back(i); // now edge between it to i
        }
    }

    // Graph starts from 1
    // topological sort
    // stack<int> st;
    // vector<int> vis(n + 1, 0);
    // for (int i = 1; i <= n; i++)
    // {
    //     if (!vis[i])
    //     {
    //         dfs(i, st, vis, adj);
    //     }
    // }

    // // transpose of a graph -> reverse all the edges
    // vector<int> transpose[n + 1];
    // for (int i = 1; i <= n; i++)
    // {
    //     vis[i] = 0;
    //     for (auto it : adj[i]) // edge between i to it
    //     {
    //         transpose[it].push_back(i); // now edge between it to i
    //     }
    // }

    while (!st.empty())
    {
        int node = st.top();
        st.pop();
        if (!vis[node])
        {
            cout << "Strongly Connected Componenets: ";
            reverseDFS(node, vis, transpose);
            cout << endl;
        }
    }

    return 0;
}