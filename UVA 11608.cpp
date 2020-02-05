#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,c=0;
    while(cin>>s)
    {
        if(s<0)
            break;
        int arr[20],brr[20],sum=s;
        c++;

        for(int i=0; i<12; i++)
            scanf("%d",&arr[i]);

        for(int i=0; i<12; i++)
            scanf("%d",&brr[i]);

        printf("Case %d:\n",c);
        for(int i=0; i<12; i++)
        {



            if(sum>=brr[i])
            {
                printf("No problem! :D\n");
                sum-=brr[i];
                sum+=arr[i];
            }

            else
            {
                printf("No problem. :(\n");
                sum+=arr[i];
            }

        }

        //cout<<sum<<endl;
    }
    return 0;
}

/*
5
3 0 3 5 8 2 1 0 3 5 6 9
0 0 10 2 6 4 1 0 1 1 2 2
-1

*/


