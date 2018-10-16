#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int dist[1000],u,v;
vector<int>node[100];
queue<int> q;
void bfs(int src)
{
    dist[src]=0;
    q.push(src);

    while(!q.empty())
    {
        u=q.front();
        q.pop();
        for(int i=0; i<node[u].size(); i++)
        {
            v=node[u][i];
            if(dist[v]==-1)
            {
                dist[v]=dist[u]+1;
                q.push(v);
            }
        }
    }
}


int main()
{
    int n,e;
    printf("Enter the number of node and edge: ");
    cin>>n>>e;
    printf("\n\nEnter the edges:\n");
    for(int i=0; i<e; i++)
    {
        int a,b;
        cin>>a>>b;
        node[a].push_back(b);
        node[b].push_back(a);
    }


    /*for(int i=1;i<=n;i++)
    {
        for(int j=0;j<node[i].size();j++)
        {
            cout<<node[i][j]<<" ";
        }
        cout<<endl;
    }
    */



    memset(dist,-1,sizeof dist);

    int x=1;
    bfs(x);


    printf("\n\nThe respective distance of the nodes from node-1:\n");
    for(int i=1; i<=n; i++)
    {
        cout<<dist[i]<<" ";
    }
    cout<<endl;



    return 0;

}
