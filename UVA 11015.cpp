#include<bits/stdc++.h>
using namespace std;
int mat[100][100];
int main()
{
    int n,m,z=0;
    while(cin>>n>>m)
    {
        if(n==0)
            break;

        map<int,string> mp;
        int q=1,mn=99999,a;
        z++;

        for(int i=0; i<n; i++)
        {
            string s;
            cin>>s;
            mp[q++]=s;
        }
        memset(mat,9999,sizeof mat);
        for(int i=1; i<=n; i++)
            mat[i][i]=0;

        for(int i=0; i<m; i++)
        {
            int a,b,c;
            cin>>a>>b>>c;
            mat[a][b]=c;
            mat[b][a]=c;
        }

        for(int k=1; k<=n; k++)
        {
            for(int i=1; i<=n; i++)
            {
                for(int j=1; j<=n; j++)
                {
                    //mat[i][j]=mat[j][i]=min(mat[i][j],max(mat[i][k],mat[k][j]));
                mat[i][j]=min(mat[i][j],mat[i][k]+mat[j][k]);
                }
            }
        }

        for(int i=1; i<=n; i++)
        {
            int sum=0;
            for(int j=1; j<=n; j++)
            {

                sum+=mat[i][j];
            }

            if(mn>sum)
            {
                mn=sum;
                a=i;
            }
        }

        printf("Case #%d : ",z);
        cout<<mp[a]<<endl;

    }
    return 0;
}



/*
4 3
timotius
harry
richard
januar
1 2 10
1 3 8
1 4 6

4 3
rocky
herwin
gaston
jefry
1 2 5
1 3 5
1 4 5

0 0
*/
