#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long fib1[1000],x,y,z,fib2[1003][252],n;
    fib1[0]=1;
    fib1[1]=2;
    fib1[2]=3;

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

    // cout<<fib1[90]<<" ";
//for(int j=0;j<=250;j++)
    //cout<<fib2[90][j]<<endl;



    for(int i=91; i<=1000; i++)
    {
        int c=0;
        for(int j=0; j<=250; j++)
        {
            int a,b;

                a=fib2[i-1][j]+fib2[i-2][j]+c;
                //cout<<a<<" ";
                if(a>9)
                {
                    b=a%10;
                   // cout<<b<<" ";
                    fib2[i][j]=b;
                    c=a/10;
                   // cout<<c<<" ";
                }
                else
                {
                    fib2[i][j]=a;
                    c=0;
                }


         // cout<<fib2[i][j];


        }
    }

    /* for(int i=91;i<=1000;i++)
     {cout<<i<<"=> ";

         for(int j=0;j<=250;j++)
         {

             cout<<fib2[i][j];
         }
         cout<<endl;
     }


    /*for(int i=0;i<=90;i++)
    {
        printf("%d => %lld\n",i,fib1[i]);
    }
    */




    while(scanf("%lld",&n)==1)
    {
        if(n>90)
        {
            int f;
            for(int j=250; j>=0; j--)
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
/*
89
90
100
300
500
1000
*/
