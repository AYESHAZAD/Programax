#include<bits/stdc++.h>
#include<math.h>
#include<cstdio>
using namespace std;
int prime[3000000],nprime,ncnt=0;
int mark[10000002],factor[300];

void sieve(int n)
{
    int i,j,limit=sqrt(n*1)+2;
    mark[1]=1;

    for(i=4; i<=n; i+=2)
    {
        mark[i]=1;
    }
    prime[nprime++]=2;

    for(i=3; i<=n; i++)
    {
        if(!mark[i])
        {
            prime[nprime++]=i;

            if(i<=limit)
            {
                for(j=i*i; j<=n; j+=i*2)
                {
                    mark[j]=1;
                }
            }
        }
    }



}

void p_factor(int a)
{
    int y=a;
    for(int i=0; prime[i]<=sqrt(a); i++)
    {
        while(a%prime[i]==0)
        {
            factor[ncnt++]=prime[i];
            a=a/prime[i];
        }
    }
    if(a>1)
    {
        factor[ncnt++]=a;
    }



}




int main()
{
    sieve(10000007);

    int n,x,y;
    while(cin>>n)
    {
        ncnt=0;

        if(n==0)
            break;


        int c=1;
        p_factor(n);
        y=factor[0];
        for(int i=0; i<ncnt; i++)
        {

            if(y!=factor[i])
            {
                c++;
                y=factor[i];
            }
        }
        printf("%d : %d",n,c);

        cout<<endl;


    }




    return 0;
}


