//the total number of tiles that will fall
//over when some are knocked by hand(including the knocked one)

#include<bits/stdc++.h>
using namespace std;
typedef vector<int> ii;
ii node[10005];
bool visited[10005];
int cnt;

void dfs(int u)
{
    cnt++;
    visited[u]=true;

    for(int i=0; i<node[u].size(); i++)
    {
        int v=node[u][i];

        if(visited[v]==false)
            dfs(v);
    }

}


int main()
{
    int t,n,m,l;
    scanf("%d",&t);

    while(t--)
    {

        scanf("%d%d%d",&n,&m,&l);

        for(int i=0; i<m; i++)
        {
            int a,b;
            scanf("%d%d",&a,&b);

            node[a].push_back(b);
        }
        memset(visited,false,sizeof visited);
        cnt=0;
        while(l--)
        {
            int z;
            scanf("%d",&z);


            if(visited[z]==false)
            {
                dfs(z);
            }
        }

        printf("%d\n",cnt);

        for(int i=0; i<=n; i++)
            node[i].clear();

    }
    return 0;
}


/*
1
3 2 1
1 2
2 3
2
*/
