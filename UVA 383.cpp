#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;

int dist[100],u,v;
vector<int> node[35];

void bfs(int src)
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

            }
        }
    }




}


int main()
{
    int t,m,n,p,c=0;
    scanf("%d",&t);
    printf("SHIPPING ROUTES OUTPUT\n");
    while(t--)
    {
        c++;
         printf("\nDATA SET  %d\n\n",c);
        scanf("%d%d%d",&m,&n,&p);
        map<string,int>mp;

        int in=1;
        for(int i=0; i<m; i++)
        {
            string s;
            cin>>s;
            if(mp[s]==0)
            {
                mp[s]=in++;
            }

        }



        for(int i=0; i<n; i++)
        {
            string s1,s2;
            cin>>s1>>s2;
            node[mp[s1]].push_back(mp[s2]);
            node[mp[s2]].push_back(mp[s1]);

        }


        while(p--)
        {
            int z,result;
            string sr,dt;
            cin>>z>>sr>>dt;
            memset(dist,-1,sizeof dist);
            int y=mp[sr];
            int x=mp[dt];
            //cout<<y<<endl;
            bfs(y);


            /* for(int j=1;j<in;j++)
             {
                 cout<<dist[j]<<" ";
             }*/


            if(dist[x]!=-1)
            {
                result=z*dist[x]*100;
                printf("$%d\n",result);
            }
            else
            {
                printf("NO SHIPMENT POSSIBLE\n");
            }
        }


        for(int i=1; i<=32; i++)
        {
            node[i].clear();
        }
        mp.clear();
    }

    printf("\nEND OF OUTPUT\n");

    return 0;
}
