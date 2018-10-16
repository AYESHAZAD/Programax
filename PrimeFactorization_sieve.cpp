#include<bits/stdc++.h>
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

    printf("\nThe prime numbers are : \n");

    for(i=0; i<nprime; i++)
    {
        cout<<prime[i]<<" ";
    }


    cout<<endl;

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


    printf("\n The prime factors of %d:\n",y);

    for(int i=0; i<ncnt; i++)

    {
        cout<<factor[i]<<" ";
    }
    cout<<endl;
}




int main()
{
    sieve(20);
    p_factor(20);
    return 0;
}
