#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;

bool visited[10005];
vector<int>node[50004];
int arr[10005];
int sum=0;

void dfs(int u)
{
    int v;
    visited[u]=true;
    sum=sum+arr[u];

    for(int i=0; i<node[u].size(); i++)
    {
        v=node[u][i];
        if(visited[v]==false)
        {

            //sum+=arr[v];
            dfs(v);

        }
    }


}



int main()
{
    int t,n,m;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d%d",&n,&m);

        for(int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }



        for(int i=0; i<m; i++)
        {
            int x,y;
            scanf("%d",&x);
            scanf("%d",&y);
            node[x].push_back(y);
            node[y].push_back(x);
        }





        memset(visited,0,sizeof visited);
        int f=0;
        for(int i=0; i<n; i++)
        {
            //sum=0;
            if(visited[i]==false)
            {
                //  sum=sum+arr[i];
                sum=0;
                dfs(i);

                if(sum!=0)
                {
                    f=1;
                }

            }
        }


        if(f==0)
        {
            printf("POSSIBLE\n");

        }

        else
        {
            printf("IMPOSSIBLE\n");
        }





        for(int i=0; i<n; i++)
        {
            node[i].clear();
        }

        memset(arr,-1,sizeof arr);
    }

    return 0;
}

