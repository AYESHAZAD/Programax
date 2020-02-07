#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long l,h;
    while(cin>>l>>h)
    {
        long long a=l,b=h,mx=-1,i;

        if(l==0 && h==0)
            break;



        if(l>h)
            swap(l,h);



        for(i=l; i<=h; i++)
        {
            long long res=i,cnt=1;


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
                //a=i;
            }

        }

        printf("%lld %lld %lld\n",a,b,mx);


    }
    return 0;
}

/*
1 10
100 200
201 210
900 1000

*/
