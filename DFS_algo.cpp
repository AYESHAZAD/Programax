#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;

vector<int>node[100];
bool visited[10005];
int v;
void dfs(int u)
{
    visited[u]=true;

    for(int i=0;i<node[u].size();i++)
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
    int n,e,x;
    cin>>n>>e;


    for(int i=0;i<e;i++)
    {
        int a,b;
        cin>>a>>b;
        node[a].push_back(b);
        node[b].push_back(a);
    }
   memset(visited,0,sizeof visited);
   printf("Start node: ");
    cin>>x;
    dfs(x);

    for(int i=1;i<=n;i++)
    {
        if(x==i)
        {
            continue;
        }

        if(visited[i]==false)
        {
            printf("%d Not connected\n",i);
        }

        else
        {
            printf("%d is connected\n",i);
        }
    }
    return 0;
}
