#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long s,m;

    while(cin>>s>>m)
    {
        long long sd=0,st,md,res;
        int visited[m+1];
        memset(visited,-1,sizeof visited);

        while(visited[sd]!=1)
        {
            visited[sd]=1;
            sd=(sd+s)%m;

        }


        if(count(visited,visited+m,-1)!=0)
        {
         printf("%10lld%10lld    Bad Choice\n",s,m);
        }

        else
        {
            printf("%10lld%10lld    Good Choice\n",s,m);
        }

       printf("\n");

    }

    return 0;
}


/*  can be done with gcd as well
while(cin>>s>>m)
    {
        long long sd=0,st,md,res;

        res=__gcd(s,m);

        if(res!=1)
        printf("%10lld%10lld    Bad Choice\n",s,m);


        else
        printf("%10lld%10lld    Good Choice\n",s,m);


       printf("\n");

    }
*/

