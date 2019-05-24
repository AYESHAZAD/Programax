#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        long long n,z,ans;
        scanf("%lld",&n);

        z=sqrt(1+(8*n));
        ans=(-1+z)/2;

        printf("%lld\n",ans);

    }
    return 0;
}
