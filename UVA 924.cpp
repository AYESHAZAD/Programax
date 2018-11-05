#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;

int dist[3000];
vector<int> node[3000];
int arr[3000];

void bfs(int src)
{
    queue<int>q;
    dist[src]=0;
    q.push(src);

    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0; i<node[u].size(); i++)
        {
            int v=node[u][i];

            if(dist[v]==-1)
            {
                dist[v]=dist[u]+1;
                arr[dist[v]]++;
                q.push(v);
            }
        }
    }
}


int main()
{
    int e;
    while(cin>>e)
    {
        for(int i=0; i<e; i++)
        {
            int n;
            cin>>n;
            for(int j=0; j<n; j++)
            {
                int x;
                cin>>x;
                node[i].push_back(x);
            }
        }


        int t;
        cin>>t;

        while(t--)
        {
            int z;
            cin>>z;
            memset(dist,-1,sizeof dist);
            memset(arr,0,sizeof arr);
            bfs(z);

            /*for(int i=0;i<e;i++)
            {
                cout<<dist[i]<<" ";
            }
            cout<<endl;*/

            int mx=0,d;
            for(int i=1; i<=e; i++)
            {
                if(arr[i]>mx)
                {
                    mx=arr[i];
                    d=i;
                }

            }
            if(mx>0)
            {
                printf("%d %d\n",mx,d);
            }
            else
            {
                printf("0\n");
            }


        }


        for(int i=0; i<e; i++)
        {
            node[i].clear();
        }
    }
    return 0;
}
