///Max elements in a set
#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
bool visited[10005];
vector<int> node[5002];
map <string,int>mp;
int cnt=0;
void dfs(int u)
{
    int v;
    cnt++;
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
    int c,r;

    while(cin>>c>>r)
    {
        if(c==0&&r==0)
            break;
        int p=1;
        for(int i=0; i<c; i++)
        {
            string s1;
            cin>>s1;
            mp[s1]=p++;
        }

        for(int i=0; i<r; i++)
        {
            string s2,s3;
            cin>>s2>>s3;
            int a,b;
            a=mp[s2];
            b=mp[s3];

            if(a!=b)
            {
                node[a].push_back(b);
                node[b].push_back(a);
            }
        }
        memset(visited,0,sizeof visited);
        int mx=0;
        for(int i=1; i<=c; i++)
        {
            cnt=0;
            if(visited[i]==false)
            {
                dfs(i);
                if(mx<cnt)
                {
                    mx=cnt;
                }


            }
        }

        printf("%d\n",mx);

        mp.clear();
        for(int i=1; i<=c; i++)
        {
            node[i].clear();
        }


    }
    return 0;
}
