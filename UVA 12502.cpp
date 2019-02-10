#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y,z;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z;
        int p=(z*((x+(x-y))/(float)(x+y)));
        printf("%d\n",p);
    }
    return 0;
}
