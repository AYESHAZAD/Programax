#include<bits/stdc++.h>
using namespace std;
long long fib2[5005][1002];
int main()
{
    long long fib1[1000],x,y,z,n;
    fib1[0]=0;
    fib1[1]=1;
    fib1[2]=1;

    for(int i=3; i<=90; i++)
    {
        fib1[i]=fib1[i-1]+fib1[i-2];
    }
    memset(fib2,0,sizeof fib2);


    x=fib1[89];
    y=fib1[90];
    int p=0,q=0;
    while(x>0)
    {
        fib2[89][p]=x%10;
        x=x/10;
        p++;
    }

    while(y>0)
    {
        fib2[90][q]=y%10;
        y=y/10;
        q++;
    }





    for(int i=91; i<=5000; i++)
    {
        int c=0;
        for(int j=0; j<=1000; j++)
        {
            int a,b;

            a=fib2[i-1][j]+fib2[i-2][j]+c;

            if(a>9)
            {
                b=a%10;

                fib2[i][j]=b;
                c=a/10;

            }
            else
            {
                fib2[i][j]=a;
                c=0;
            }


        }
    }


    while(scanf("%lld",&n)==1)
    {
        if(n>90)
        {
            int f=0;
            for(int j=1000; j>=0; j--)
            {
                if(fib2[n][j]>0)
                {
                    f=j;
                    break;
                }
            }


            if(fib2[n][f]==0)
                f=f+1;

            for(int j=f; j>=0; j--)
            {

                printf("%lld",fib2[n][j]);
            }
            printf("\n");

        }

        else
            printf("%lld\n",fib1[n]);
    }



    return 0;
}

