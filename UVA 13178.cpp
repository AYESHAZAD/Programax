#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,ans;
        cin>>n;
        ans=(n*(n+1))/2;

        if(ans%3==0)
            printf("YES\n");

        else
            printf("NO\n");
    }
    return 0;
}
