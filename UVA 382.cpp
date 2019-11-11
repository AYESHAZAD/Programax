#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;

        long long sum=0;
        int f=0;

        for(int i=1; i<n; i++)
        {
            if(n%i==0)
            {
                sum+=i;
                // cout<<sum<<" ";
               // if(i!=n/i && n/i!=n)
                   // sum+=n/i;
                //cout<<sum<<" ";
            }

            if(sum>n)
            {
                f=1;
                break;
            }
        }
        //cout<<sum<<endl;
        printf("%5d  ",n);
        if(f==1)
            printf("ABUNDANT\n");

        else if(sum<n)
            printf("DEFICIENT\n");

        else if(sum==n)
            printf("PERFECT\n");


    }
    printf("END OF OUTPUT\n");
    return 0;
}
