 #include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld %lld",&a,&b);
        if(b%a==0)
            printf("%lld %lld\n",a,b);
        else
            printf("-1\n");


    }

}
