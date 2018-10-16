#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>

using namespace std;
queue<int>q;
vector<int> node[100];
int dist[100],u,v;
bool f=0;
void bfs(int src)
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
            }

            if(dist[u]==dist[v])
            {
                f=1;
                break;
            }
        }
    }
}


int main()
{
    int n,e;
    cin>>n>>e;



    for(int i=0;i<e;i++)
    {
        int a,b;
        cin>>a>>b;
        node[a].push_back(b);
        node[b].push_back(a);
    }

    memset(dist,-1,sizeof dist);

    f=0;
    bfs(0);
    if(f==1)
    {
        printf("\n\nThe graph is not Bi-coloring\n");
    }
    else
    {
        printf("\n\nThe graph is Bi-coloring\n");
    }


     for(int i=0;i<n;i++)
        {
            node[i].clear();
        }
        return 0;
}
