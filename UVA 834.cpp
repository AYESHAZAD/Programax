#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b;
    while(cin>>a>>b)
    {
        long long n,p;
        n=a/b;
        p=a%b;
        printf("[%lld;",n);
        while(p>0)
        {
            long long x,y;
            x=b;
            y=p;
            n=x/p;
            p=x%y;
            printf("%lld",n);

            if(p>0)
                printf(",");
            b=y;

        }
        printf("]\n");

    }
    return 0;
}
