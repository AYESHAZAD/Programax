///Using BFS....can move in four direction
#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
char str[100][100];
int dist[100][100],row,col;
int fx[]={0,-1,0,1};
int fy[]={1,0,-1,0};

void flood_bfs(int x, int y)
{
    queue< pair<int,int> > q;
    dist[x][y]=0;
    q.push(make_pair(x,y));
    while(!q.empty())
    {
        int a=q.front().first;
        int b= q.front().second;

      q.pop();
      int m,n;
        for(int i=0;i<4;i++)
        {

            m=a+fx[i];
            n=b+fy[i];
            if(m>=0&&m<row && n>=0 && n<col && str[m][n]!='#' && dist[m][n]==-1  )
            {
                dist[m][n]=dist[a][b]+1;
                q.push(make_pair(m,n));
            }
        }
    }
}


int main()
{
    printf("Enter the row and column : \n");
    cin>>row>>col;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>str[i][j];
        }
    }

   /*  for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<str[i][j]<<" ";
        }
        cout<<endl;
    }

*/

    memset(dist,-1,sizeof dist);

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(str[i][j]=='@')
            {

                flood_bfs(i,j);
            }
        }
    }

      for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<dist[i][j]<<" ";
        }
        cout<<endl;
    }

memset(str,0,sizeof str);



    return 0;
}


/*
#@#..
#.#..
#.#..
#....
###..
..#..
..#.D
*/
