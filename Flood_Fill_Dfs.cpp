///Using DFS... can move in 8direction
#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
char maze[101][101];
int r[101][101],row,col;/// r is used as visited
int fx[]={0,0,1,-1,-1,1,-1,1};
int fy[]={-1,1,0,0,1,1,-1,-1};

void flood_dfs(int x,int y)
{
    r[x][y]=1;
    for(int i=0;i<8;i++)
    {
        int a,b;
        a=x+fx[i];
        b=y+fy[i];
        if(a>=0&&a<row && b>=0&&b<col && r[a][b]==0)
        {
            r[a][b]=1;
            if(maze[a][b]=='@')
            {
                flood_dfs(a,b);
            }
        }

    }

}


int main()
{
    cin>>row>>col;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>maze[i][j];
        }
    }
    memset(r,0,sizeof r);
    int cnt=0;


    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(r[i][j]==0)
            {
                if(maze[i][j]=='@')
                {
                    flood_dfs(i,j);
                    cnt++;
                }
            }
        }
    }

    printf("\n\nThe number of components is %d\n",cnt);
    return 0;

}

/*
4 5
@##@@
@@#@@
#@###
##@#@

*/

