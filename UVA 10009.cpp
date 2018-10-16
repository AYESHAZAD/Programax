#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int dist[10005],u,v;

vector <int> node[1005];
int parent[1005];

void bfs(int src,int dest)
{
    queue<int> q;
    dist[src]=0;
    q.push(src);

    while(!q.empty())
    {
        u=q.front();
        q.pop();

        for(int i=0; i<node[u].size(); i++)
        {
            v=node[u][i];

            if(dist[v]==-1)
            {
                dist[v]=dist[u]+1;
                q.push(v);

                parent[v]=u;

                // if(parent[v]==dest)
                // return;


            }

        }
    }
}


int main()
{
    int t,n,m,a,b,p,q;
    char ch;
    scanf("%d",&t);

    while(t--)
    {

        cin>>m>>n;
        getchar();

        for(int i=0; i<m; i++)
        {
            string s1,s2;
            cin>>s1>>s2;
            int x,y;

            x=s1[0]-65;
            y=s2[0]-65;
            node[x].push_back(y);
            node[y].push_back(x);


        }


        while(n--)
        {
            string s3,s4;
            cin>>s3>>s4;




            a=s3[0]-65;
            b=s4[0]-65;

            memset(dist,-1,sizeof dist);
            memset(parent,-1, sizeof parent);
            bfs(b,a);


            while(a!=b)
            {
                printf("%c",a+65);
                a=parent[a];
            }
            printf("%c",a+65);
            printf("\n");






        }

        if(t>0)
            cout<<endl;

        for(int i=0; i<=100; i++)
        {
            node[i].clear();
        }

    }

    return 0;
}

