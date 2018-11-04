///No of sets
#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

bool visited[50005];
vector<int> node[50005];
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



int main()
{
    int n,m,c=1;

    while(cin>>n>>m)
    {
        if(n==0&&m==0)
            break;


        for(int i=0; i<m; i++)
        {
            int a,b;
            cin>>a>>b;

            node[a].push_back(b);
            node[b].push_back(a);

        }

        memset(visited,0,sizeof visited);
        cnt=0;
        for(int i=1; i<=n; i++)
        {
            if(visited[i]==false)
            {
                cnt++;
                dfs(i);

            }
        }

        printf("Case %d: %d\n",c,cnt);
        c++;


        for(int i=1; i<=n; i++)
        {
            node[i].clear();
        }



    }

    return 0;

}
