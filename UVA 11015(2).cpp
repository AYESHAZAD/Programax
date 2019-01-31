#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;
typedef vector<ii> vc;
vc v[1000];
int dist[1000];

void dijkstra(int src)
{
    priority_queue< ii, vector<ii>, greater<ii> > pq;

    dist[src]=0;
    pq.push(make_pair(0,src));

    while(!pq.empty())
    {
        int d=pq.top().first;
        int u=pq.top().second;

        pq.pop();

        if(d>dist[u])
            continue;

        for(int i=0; i<v[u].size(); i++)
        {
            ii x= v[u][i];

            if(dist[u]+x.second< dist[x.first])
            {
                dist[x.first]=dist[u]+x.second;
                pq.push(make_pair(dist[x.first],x.first));
            }
        }
    }
}


int main()
{
    int n,m,c=0;
    while(cin>>n>>m)
    {

        if(n==0)
            break;
        c++;
        map<int,string> mp;
        int x=1,p;
        for(int i=0; i<n; i++)
        {

            string s;
            cin>>s;
            mp[x++]=s;
        }

        for(int i=0; i<m; i++)
        {
            int a,b,cost;
            scanf("%d%d%d",&a,&b,&cost);
            v[a].push_back(make_pair(b,cost));
            v[b].push_back(make_pair(a,cost));
        }

        int mx=999999;
        for(int i=1; i<=n; i++)
        {
            memset(dist,999999,sizeof dist);
            dijkstra(i);
            int sum=0;
            for(int j=1; j<=n; j++)
            {
                sum+=dist[j];
            }

            if(mx>sum)
            {
                mx=sum;
                p=i;
            }

        }


        cout<<"Case #"<<c<<" : "<<mp[p]<<endl;

        for(int i=1; i<=n; i++)
            v[i].clear();

    }
    return 0;
}
