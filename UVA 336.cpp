///queue,stack should be inside the function
#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int dist[1000],u,v,p;
vector<int>node[35];


void bfs(int src)
{
    dist[src]=0;
    queue<int> q;
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
    int nc,t,c=1;
    long long n;
    while(cin>>nc)
    {
        map<long long,int> mp;

        if(nc==0)
            break;

        int in=1;
        for(int i=0; i<nc; i++)
        {
            int a,b;
            cin>>a>>b;

            if(mp[a]==0)
            {
                mp[a]=in++;
            }
            if(mp[b]==0)
            {
                mp[b]=in++;
            }
            node[mp[a]].push_back(mp[b]);
            node[mp[b]].push_back(mp[a]);
        }


        while(cin>>n>>t)
        {
            if(n==0&&t==0)
            {
                break;
            }

            memset(dist,-1,sizeof dist);

            int x=mp[n];
            bfs(x);
            p=0;

            for(int i=1; i<in; i++)
            {
                if(x==i)///akhanay bhul hoisilo
                {
                    continue;
                }
                if(dist[i]==-1||dist[i]>t)
                {
                    p++;
                }

            }

            printf("Case %d:",c);
            printf(" %d nodes not reachable from node %lld with TTL = %d.\n",p,n,t);
            c++;
        }


        for(int i=1; i<=32; i++)
        {
            node[i].clear();
        }

        mp.clear();



    }



    return 0;

}

