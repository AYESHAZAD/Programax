#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int dist[205],u,v;
bool f=0;
queue<int> q;
vector<int> node[201];

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
    int n,l;

    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }

        scanf("%d",&l);

        for(int i=0; i<l; i++)
        {
            int x,y;
            cin>>x>>y;
            node[x].push_back(y);
            node[y].push_back(x);
        }
        memset(dist,-1,sizeof dist);
        f=0;

        bfs(0);

        if(f==1)
        {
            printf("NOT BICOLORABLE.\n");
        }

        else
        {
            printf("BICOLORABLE.\n");
        }

        for(int i=0; i<n; i++)
        {
            node[i].clear();
        }

    }
    return 0;
}
