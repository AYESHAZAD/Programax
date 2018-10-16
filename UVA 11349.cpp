#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
long  mat[105][105];
int main()
{
    int t,c=0,n;
    scanf("%d",&t);
    char ch1,ch2;

    while(t--)
    {
        int f=0,g=0;

        cin >> ch1 >> ch2;
        scanf("%d",&n);

        c++;

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                scanf("%ld",&mat[i][j]);

                if(mat[i][j]<0)
                {
                    g=1;

                }

            }
        }

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {

                if(mat[i][j]!=mat[n-i+1][n-j+1])
                {
                    f=1;
                    break;

                }



            }
        }

        if(f==0&&g==0)
        {
            printf("Test #%d: Symmetric.\n",c);
        }
        else
        {
            printf("Test #%d: Non-symmetric.\n",c);
        }




    }

    return 0;
}
