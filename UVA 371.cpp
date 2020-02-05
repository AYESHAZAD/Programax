#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long l,h;
    while(cin>>l>>h)
    {
        long long a=0,b,mx=-1,i;

        if(l==0 && h==0)
            break;

        if(l==1 && h==1)
        {
            printf("Between 1 and 1, 1 generates the longest sequence of 3 values.\n");
            continue;
        }


        if(l>h)
            swap(l,h);


        for(i=l; i<=h; i++)
        {
            long long res=i,cnt=0;


            while(res>1)
            {
                if(res%2==0)
                {
                    res=res/2;

                }
                else
                {
                    res=(3*res)+1;

                }
                cnt++;

            }

            if(mx<cnt)
            {
                mx=cnt;
                a=i;
            }

        }

        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",l,h,a,mx);


    }
    return 0;
}
