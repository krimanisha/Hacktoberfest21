#include<iostream>
#include<climits>
using namespace std;

int mini_dis(int dis[], bool Tset[])
{
    int min=INT_MAX,ind;
              
    for(int k=0;k<6;k++) 
    {
        if(Tset[k]==false && dis[k]<=min)      
        {
            min=dis[k];
            ind=k;
        }
    }
    return ind;
}

void DijkstraAlgo(int graph[6][6],int src) 
{
    int dis[6];                              
    bool Tset[6];
    
     
    for(int k = 0; k<6; k++)
    {
        dis[k] = INT_MAX;
        Tset[k] = false;    
    }
    
    dis[src] = 0;                 
    
    for(int k = 0; k<6; k++)                           
    {
        int m=mini_dis(dis,Tset); 
        Tset[m]=true;
        for(int k = 0; k<6; k++)                  
        {
            if(!Tset[k] && graph[m][k] && dis[m]!=INT_MAX && dis[m]+graph[m][k]<dis[k])
                dis[k]=dis[m]+graph[m][k];
        }
    }
    cout<<"Vertex\t\tDistance from source vertex"<<endl;
    for(int k = 0; k<6; k++)                      
    { 
        char str=65+k; 
        cout<<str<<"\t\t\t"<<dis[k]<<endl;
    }
}

int main()
{
    int graph[6][6]={
        {0, 1, 2, 0, 0, 0},
        {1, 0, 0, 5, 1, 0},
        {2, 0, 0, 2, 3, 0},
        {0, 5, 2, 0, 2, 2},
        {0, 1, 3, 2, 0, 1},
        {0, 0, 0, 2, 1, 0}};
    DijkstraAlgo(graph,0);
    return 0;                           
}