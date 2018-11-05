#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>

using namespace std;
int dist[1002],u,v;
vector<int> node[1002];
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
    int t,p,d;

    scanf("%d",&t);
    while(t--)
    {

        int g=0;

        scanf("%d%d",&p,&d);

        for(int i=0; i<d; i++)
        {
            int a,b;
            scanf("%d%d",&a,&b);
            node[a].push_back(b);
            node[b].push_back(a);
        }

        memset(dist,-1,sizeof dist);
        bfs(g);

        for(int j=1; j<p; j++)
        {
            printf("%d\n",dist[j]);
        }

        if(t!=0)
            printf("\n");


        for(int i=0; i<p; i++)
        {
            node[i].clear();
        }

    }
    return 0;
}
