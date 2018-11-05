#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int fx[]= {0,0,1,-1,-1,1,-1,1};
int fy[]= {-1,1,0,0,1,1,-1,-1};
int r[105][105],m,n;
char arr[105][105];
void flood_dfs(int x,int y)
{
    r[x][y]=1;

    for(int i=0; i<8; i++)
    {
        int a,b;
        a=x+fx[i];
        b=y+fy[i];
        if(a>=0&&a<m && b>=0&&b<n&& r[a][b]==0 )
        {
            if(arr[a][b]=='@')
            {
                flood_dfs(a,b);
            }
        }

    }
}


int main()
{
    while(cin>>m>>n)
    {
        if(m==0)
            break;

        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>arr[i][j];
            }
        }
        int cnt=0;
        memset(r,0,sizeof r);
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(r[i][j]==0)
                {
                    if(arr[i][j]=='@')
                    {
                        cnt++;
                        flood_dfs(i,j);
                    }
                }
            }
        }

        printf("%d\n",cnt);
    }
    return 0;
}
