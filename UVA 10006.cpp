#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int mark[1000002],prime[3000000];
int nprime=0;

void sieve(int n)
{
    int i,j,limit=sqrt(n*1)+2;
    mark[1]=1;

    for(i=4; i<=n; i+=2)
        mark[i]=1;

    prime[nprime++]=2;

    for(i=3; i<=n; i++)
    {
        if(!mark[i])
        {
            prime[nprime++]=i;

            if(i<=limit)
            {
                for(j=i*i; j<=n; j+=i*2)
                    mark[j]=1;
            }
        }
    }
}

ll mod(ll x,ll a, ll b)
{
    if(a==0)
        return 1;
    if(a%2==0)
    {
        ll res=mod(x,a/2,b);
        return ((res%b)*(res%b))%b;
    }

    else
        return ((x%b)*(mod(x,a-1,b)%b))%b;
}

bool check(int n)
{
    bool f=true;
    for(int i=2; i<n; i++)
    {
        if(mod(i,n,n)!=i)
        {
            f=false;
            break;
        }
    }
    return f;
}


int main()
{
    sieve(70000);

    int n;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;


        if(mark[n]==0)
        {
            printf("%d is normal.\n",n);
            continue;
        }



        if(check(n))
            printf("The number %d is a Carmichael number.\n",n);
        else
            printf("%d is normal.\n",n);

    }
    return 0;
}

/*
1729
17
561
1109
431
0
*/
