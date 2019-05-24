#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k,p,c=0;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d%d%d",&n,&k,&p);
        int ans=k+p;
        c++;

        while(ans>n)
            ans=ans-n;

        printf("Case %d: %d\n",c,ans);

    }
    return 0;
}
