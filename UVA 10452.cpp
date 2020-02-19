#include<bits/stdc++.h>
using namespace std;

char maze[10][10];
int r[10][10],n,m;/// r is used as visited
int fx[]= {0,0,1,1,1};
int fy[]= {1,-1,0,1,-1};
vector<int> v;


void flood_dfs(int x,int y)
{
    r[x][y]=1;
    int f=0;
    for(int i=0; i<5; i++)
    {
        int a,b;
        a=x+fx[i];
        b=y+fy[i];

        if(a>=0&&a<n && b>=0&&b<m && r[a][b]==0)
        {
            r[a][b]=1;
            if(maze[a][b]=='I'||maze[a][b]=='E'||maze[a][b]=='H'||maze[a][b]=='O'||maze[a][b]=='V'||maze[a][b]=='A')
            {
                v.push_back(i);
                // cout<<i<<" ";
                flood_dfs(a,b);
            }

            else if(maze[a][b]=='#')
            {
                v.push_back(i);
                //cout<<i<<" ";
                // f=1;
                // break;
            }
        }
        // if(f==1)
        // break;
    }

}


int main()
{

    int t;
    scanf("%d",&t);

    while(t--)
    {
        int x,y;

        memset(maze,0,sizeof maze);
        memset(r,0,sizeof r);

        scanf("%d%d",&n,&m);

        for(int i=n-1; i>=0; i--)
        {
            for(int j=0; j<m; j++)
            {
                cin>>maze[i][j];

                if(maze[i][j]=='@')
                {
                    x=i;
                    y=j;
                }
            }
        }

        flood_dfs(x,y);

        for(int i=0; i<v.size(); i++)
        {
            //cout<<v[i]<<" ";
            if(v[i]==0 || v[i]==3)
                printf("right");

            else if(v[i]==2)
                printf("forth");

            else
                printf("left");

            if(i!=v.size()-1)
                printf(" ");
        }
        printf("\n");


        v.clear();
        /*for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cout<<maze[i][j];
            }
            cout<<endl;
        }
        */




    }
    return 0;

}

/*

2
6 5
PST#T
BTJAS
TYCVM
YEHOF
XIBKU
N@RJB
5 4
JA#X
JVBN
XOHD
DQEM
T@IY

*/


