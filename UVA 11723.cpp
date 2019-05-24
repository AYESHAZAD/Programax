#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,n,c=0;

    while(cin>>r>>n)
    {
       if(r==0&&n==0)
            break;

        int res=(r-1)/n;
        c++;

        if(res<=26)
            printf("Case %d: %d\n",c,res);
        else
           printf("Case %d: impossible\n",c);
    }

    return 0;
}
