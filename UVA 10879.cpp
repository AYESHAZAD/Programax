#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,c=0;
    scanf("%d",&t);

    while(t--)
    {
        long long s,i;
        scanf("%lld",&s);
        vector < pair <int,int> > v;
        c++;
        for(i=2; i<=sqrt(s); i++)
        {
            if(s%i==0)
            {
                v.push_back(make_pair(i,s/i));
            }

            if(v.size()==2)
                break;
        }

    printf("Case #%d: %lld = %d * %d = %d * %d\n",c,s,v[0].first,v[0].second,v[1].first,v[1].second);

    }

    return 0;
}
