#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int fx[]= {0,0,1,-1,-1,1,-1,1};
int fy[]= {-1,1,0,0,1,1,-1,-1};
int r[25][25],n;
char arr[25][25];

void flood_dfs(int x,int y)
{
    r[x][y]=1;

    for(int i=0; i<8; i++)
    {
        int a,b;
        a=x+fx[i];
        b=y+fy[i];

        if(a>=0&&a<n && b>=0&&b<n && r[a][b]==0)
        {
            r[a][b]=1;
            if(arr[a][b]=='1')
            {
                flood_dfs(a,b);
            }
        }
    }
}


int main()
{
    int c=1;
    while(cin>>n)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>arr[i][j];
            }
        }

        memset(r,0,sizeof r);
        int cnt=0;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(r[i][j]==0)
                {
                    if(arr[i][j]=='1')
                    {
                        cnt++;
                        flood_dfs(i,j);
                    }
                }
            }

        }
        printf("Image number %d contains %d war eagles.\n",c,cnt);
        c++;
       memset(arr,0,sizeof arr);
    }

    return 0;
}
