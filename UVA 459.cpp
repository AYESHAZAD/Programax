///No of sets
#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;

bool visited[1000];
vector<int>node[500];


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
    int t;

    scanf("%d",&t);

    while(t--)
    {
        char ch1;
        cin>>ch1;
        getchar();
        int n=ch1-65+1;

        string s;
        while(getline(cin,s))
        {

            if(s.size()==0)
            {
                break;
            }

            int x,y;
            x=s[0]-65;
            y=s[1]-65;


            node[x].push_back(y);
            node[y].push_back(x);

        }


        memset(visited,0,sizeof visited);

        int cnt=0;
        for(int i=0; i<n; i++)
        {
            if(visited[i]==false)
            {

                dfs(i);
                cnt++;
            }
        }
        printf("%d\n",cnt);


        for(int i=0; i<n; i++)
        {
            node[i].clear();
        }
        if(t>0)
            printf("\n");

    }

    return 0;
}


