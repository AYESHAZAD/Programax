#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int prime[30000000],nprime,ncnt=0;
int mark[100000007],factor[500000]; 
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

void p_factor(long long a)
{
    long long y=a;
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

long long sum_of_digit(long long x) 
    long long sum=0,y;

    while(x>0)
    {
        y=x%10;
        sum+=y;
        x=x/10;
    }

    return sum;
}



int main()
{
    sieve(100000007);

    int t;
    long long x,p,sum1,i;
    scanf("%d",&t);
    while(t--)
    {

        cin>>x;
        /*
        p_factor(x);

        for(int i = 0; i < ncnt; i++)
        {
            cout<< factor[i] << " ";
        }
        cout<< endl;*/

        for(i=x+1; i<=10000000000; i++) 
        {
            ncnt=0;
            p=sum_of_digit(i);
            //cout<<p << endl;
            p_factor(i);

            if(ncnt==1)
                sum1 = 1;
            else
                sum1=0;
            for(int j=0; j<ncnt; j++)
            {
                sum1+=sum_of_digit(factor[j]);

                //printf("%d ", factor[j]);
            }

            memset(factor, 0, sizeof factor); 

            if(sum1==p)
            {
                cout<<i<<endl;
                break;

            }
        }

    }


    return 0;
}
