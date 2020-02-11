#include<bits/stdc++.h>
using namespace std;
int dp[25][25],arr[25],brr[25];

int lcs(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(arr[i-1]==brr[j-1])
                dp[i][j]=dp[i-1][j-1]+1;
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);

        }
    }

    return dp[n][n];
}

int main()
{
    int n,x,a;
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
       scanf("%d",&x);
       x--;
       arr[x]=i;
    }


    while(scanf("%d",&a)==1)
    {
        a--;
        brr[a]=0;
        for(int i=1;i<n;i++)
        {
             scanf("%d",&a);
             a--;
            brr[a]=i;
        }


        memset(dp,0,sizeof dp);


        int z=lcs(n);
        printf("%d\n",z);
        memset(brr,0,sizeof brr);

    }

    return 0;

}

/*
4
4  2  3  1
1  3  2  4
3  2  1  4
2  3  4  1
10
3  1  2  4  9  5  10  6  8  7
1  2  3  4  5  6  7  8  9  10
4  7  2  3  10  6  9  1  5  8
3  1  2  4  9  5  10  6  8  7
2  10  1  3  8  4  9  5  7  6

*/
