#include<bits/stdc++.h>

using namespace std;
int prime[3000000],nprime=0;
int mark[10000007];

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



int main()
{
    sieve(10000005);
    long long n;

    while(cin>>n)
    {

        if(n<8)
        {
            printf("Impossible.\n");
            continue;
        }


        else
        {



            if(n%2==0)
            {
                printf("2 2");
                n-=4;
            }
            else
            {
                printf("2 3");
                n-=5;
            }


            for(int i=0; prime[i]<=n/2; i++)
            {
                int x=n-prime[i];
                if(mark[x]==0)
                {

                    printf(" %d %d\n",prime[i],x);
                    break;
                }

            }

        }
    }




    return 0;
}
