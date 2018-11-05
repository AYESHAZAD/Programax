#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;

int arr[1005][1005];
int dist[1005][1005],r,c;
int fx[]= {0,-1,0,1};
int fy[]= {1,0,-1,0};

void flood_bfs(int x,int y)
{
    queue< pair<int,int> > q;

    dist[x][y]=0;
    q.push(make_pair(x,y));


    while(!q.empty())
    {
        int a,b;
        a=q.front().first;
        b=q.front().second;
        q.pop();
        int m,n;
        for(int i=0;i<4; i++)
        {

            m=a+fx[i];
            n=b+fy[i];
            if(m>=0&&m<r && n>=0&&n<c && arr[m][n]!=99999 && dist[m][n]==-1)
            {
                dist[m][n]=dist[a][b]+1;
                q.push(make_pair(m,n));
            }
        }
    }

}


int main()
{
    while(cin>>r>>c)
    {
        if(r==0&&c==0)
            break;

        int t;
        cin>>t;

        while(t--)
        {
            int x,y;
            cin>>x>>y;
            for(int i=0; i<y; i++)
            {
                int z;
                cin>>z;
                arr[x][z]=99999;
            }
        }




        memset(dist,-1,sizeof dist);
        int p,q,u,v;
        cin>>p>>q;
        cin>>u>>v;

        flood_bfs(p,q);



        printf("%d\n",dist[u][v]);
        memset(arr,0,sizeof arr);





    }
    return 0;
}
