#include <bits/stdc++.h>
using namespace std;
typedef vector<int> ii;
ii node[100005];
ii top;
bool visited[100005];

void dfs1(int u)
{
    visited[u]=true;

    for(int i=0; i<node[u].size(); i++)
    {
        int v=node[u][i];

        if(visited[v]== false)
            dfs1(v);

    }

    top.push_back(u);
}


void dfs2(int u)
{
    visited[u]=true;

    for(int i=0; i<node[u].size(); i++)
    {
        int v=node[u][i];

        if(visited[v]== false)
            dfs2(v);

    }


}



int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);

        for(int i=0; i<m; i++)
        {
            int a,b;
            scanf("%d%d",&a,&b);
            node[a].push_back(b);
        }
        memset(visited,false,sizeof visited);
        for(int i=1; i<=n; i++)
        {
            if(visited[i]==false)
                dfs1(i);
        }

        for(int i=0; i<=n; i++)
            visited[i]=0;
        int cnt=0;

        for(int i=top.size()-1; i>=0; i--)
        {
            if(visited[top[i]]==false)
            {
                cnt++;
                dfs2(top[i]);
            }
        }
        printf("%d\n",cnt);

        for(int i=0; i<=n; i++)
            node[i].clear();

        top.clear();

    }
    return 0;
}

/*
1
3 2
1 2
2 3
*/


