///Max elements in a set
#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
vector<int> node[30005];
bool visited[30005];
int cnt=0;

void dfs(int u)
{
    cnt++;
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
int main()
{
    int t,n,m,mx;
    cin>>t;

    while(t--)
    {
        cin>>n>>m;

        for(int i=0; i<m; i++)
        {
            int a,b;

            cin>>a>>b;


            node[a].push_back(b);
            node[b].push_back(a);



        }

        // cout<<endl;

        /* for(int i=1; i<=n; i++)
         {
             cout<<i<<" = ";
             for(int j=0;j<node[i].size();j++)
             {
                 cout<<node[i][j]<<" ";
             }
             cout<<endl;

         }*/

        memset(visited,0,sizeof visited);
        mx=0;
        for(int i=1; i<=n; i++)
        {
            cnt=0;
            if(visited[i]==false)
            {
                //cnt=0;
                dfs(i);

                if(mx<cnt)
                {
                    mx=cnt;
                }
            }
        }
        printf("%d\n",mx);

        for(int i=1; i<=n; i++)
        {
            node[i].clear();
        }

    }
    return 0;
}
