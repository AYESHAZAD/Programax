#include<bits/stdc++.h>
using namespace std;

int dp[102][102],t1[105],t2[105];

int lcs(int m,int n)
{
    for(int i=0; i<=m; i++)
        dp[i][0]=0;

    for(int j=0; j<=n; j++)
        dp[0][j]=0;

    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(t1[i-1]==t2[j-1])
            {
                dp[i][j]= dp[i-1][j-1]+1;

            }

            else
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }

    return dp[m][n];
}



int main()
{
    int n1,n2,c=0;

    while(cin>>n1>>n2)
    {
        int z=0;
        if(n1==0 && n2==0)
            break;

        c++;
        for(int i=0; i<n1; i++)
            scanf("%d",&t1[i]);

        for(int j=0; j<n2; j++)
            scanf("%d",&t2[j]);


        memset(dp,0,sizeof dp);

        z=lcs(n1,n2);

        printf("Twin Towers #%d\n",c);
        printf("Number of Tiles : %d\n",z);
        printf("\n");

    }

    return 0;

}


/*
7 6
20 15 10 15 25 20 15
15 25 10 20 15 20
8 9
10 20 20 10 20 10 20 10
20 10 20 10 10 20 10 10 20
0 0

*/
