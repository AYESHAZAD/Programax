/// try to imagine center node of claw to be of one color and remaining three of the other.
#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int dist[305],u,v;
queue<int> q;
vector<int> node[301];
bool f=0;

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
    int v,a,b;

    while(cin>>v)
    {
        if(v==0)
            break;

        while(cin>>a>>b)
        {
            if(a==0 && b==0)
                break;

            node[a].push_back(b);
            node[b].push_back(a);
        }

        memset(dist,-1,sizeof dist);
        f=0;
        bfs(1);
        if(f==1)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }

        for(int i=1; i<=v; i++)
        {
            node[i].clear();
        }


    }
    return 0;
}
