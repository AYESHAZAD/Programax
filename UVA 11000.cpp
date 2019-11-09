#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    long long f[1000],m[1000],a;
    m[0]=0;
    f[0]=1;
    f[1]=m[1]=1;
    f[2]=m[2]=2;

    while(scanf("%lld",&n)==1)
    {
        if(n==-1)
            break;
        long long a;

        for(int i=3;i<=n;i++)
        {
            m[i]=m[i-1]+m[i-2]+1;
            f[i]=f[i-1]+f[i-2];
        }
       // cout<<m[n]<<" "<<f[n];
        a=f[n]+m[n];
        printf("%lld %lld\n",m[n],a);


    }

    return 0;
}
