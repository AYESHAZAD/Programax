///No of sets
#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
bool visited[1002];
vector<int> node[1002];
int cnt=0;
void dfs(int u)
{
    int v;
    visited[u]=true;

    for(int i=0; i<node[u].size(); i++)
    {
        v=node[u][i];

        if(visited[v]==false)
        {
            dfs(v);
        }
    }
}

double distance(double x1,double y1,double x2,double y2)
{
    double z=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    return z;
}





int main()
{
    int t,c=1;
    scanf("%d",&t);

    while(t--)
    {
        vector< pair<double,double> >v;
        int n;
        double d;
        scanf("%d",&n);
        scanf("%lf",&d);

        for(int i=0; i<n; i++)
        {
            double x,y;
            scanf("%lf%lf",&x,&y);
            v.push_back(make_pair(x,y));
        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i==j)
                    continue;

                double ans=distance(v[i].first,v[i].second,v[j].first,v[j].second);
                //  printf("%lf\n",ans);
                if(ans<=d)
                {
                    node[i].push_back(j);
                    node[j].push_back(i);
                }
            }
        }

        memset(visited,0,sizeof visited);
        cnt=0;

        for(int i=0; i<n; i++)
        {
            if(visited[i]==false)
            {
                cnt++;
                dfs(i);
            }
        }

        printf("Case %d: %d\n",c,cnt);
        c++;

        v.clear();
        for(int i=0; i<=n; i++)node[i].clear();


    }

    return 0;
}

