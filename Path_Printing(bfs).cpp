#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;

int dist[100],u,v;
queue<int> q;
vector <int> node[100];
int parent[100005];

void bfs(int src,int dest)
{
    dist[src]=0;
    q.push(src);

    while(!q.empty())
    {
        u=q.front();
        q.pop();

        for(int i=0;i<node[u].size();i++)
        {
            v=node[u][i];

            if(dist[v]==-1)
            {
                dist[v]=dist[u]+1;
                q.push(v);

                parent[v]=u;

                if(parent[v]==dest)
                    return;


            }

        }
    }
}


int main()
{
    int n,e,x,y;
    printf("Enter the no. of nodes and edges: ");
    cin>>n>>e;
printf("\nEnter the edges:\n");

    for(int i=0;i<e;i++)
    {
        int a,b;
        cin>>a>>b;
        node[a].push_back(b);
        node[b].push_back(a);
    }



    printf("\n\nEnter the source and destination node : ");
    cin>>x>>y;
    memset(dist,-1,sizeof dist);
    bfs(y,x);

    printf("\n\nThe shortest path :");
    while(x!=y)
    {
        printf(" %d",x);
        x=parent[x];
    }
    printf(" %d",x);

    for(int i=1;i<=n;i++)
    {
        node[i].clear();
    }

    return 0;
}
