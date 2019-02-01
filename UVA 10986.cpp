#include<bits/stdc++.h>
using namespace std;
#define inf 999999999
typedef pair<int,int> ii;
typedef vector<ii> vc;
vc v[20010];
int dist[20010];

void dijkstra(int src)
{
    priority_queue <ii ,vector<ii> , greater<ii> > pq;

    dist[src]=0;
    pq.push(make_pair(0,src));

    while(!pq.empty())
    {
        int d=pq.top().first;
        int u=pq.top().second;
        pq.pop();

        if(d>dist[u])
            continue;

        for(int i=0;i<v[u].size();i++)
        {
            ii x=v[u][i];
            if(dist[u]+x.second<dist[x.first])
            {
                dist[x.first]=dist[u]+x.second;
                pq.push(make_pair(dist[x.first],x.first));
            }
        }
    }

}


int main()
{
    int cases,n,m,t,s,c=0;
    scanf("%d",&cases);
    while(cases--)
    {
        cin>>n>>m>>s>>t;
        c++;
        for(int i=0;i<m;i++)
        {
            int a,b,c;
            cin>>a>>b>>c;
            v[a].push_back(make_pair(b,c));
             v[b].push_back(make_pair(a,c));
        }


        for(int i=0;i<n;i++)
        dist[i]=inf;

        dijkstra(s);


        if(dist[t]==inf)
            printf("Case #%d: unreachable\n",c);

        else
        {
        printf("Case #%d: %d\n",c,dist[t]);
        }

        for(int i=0;i<n;i++)
            v[i].clear();

    }
    return 0;
}



/*
3
2 1 0 1
0 1 100
3 3 2 0
0 1 100
0 2 200
1 2 50
2 0 0 1
*/
