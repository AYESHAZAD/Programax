#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,c=0;
    scanf("%d",&t);
    while(t--)
    {
        c++;
        float d,u,v,t1,t2,p;
        scanf("%f%f%f",&d,&v,&u);
        if(u<=v)
            printf("Case %d: can't determine\n",c);

        else
        {
            t1=d/u;
            t2=d/(sqrt((u*u)-(v*v)));
            p=t2-t1;

            if(p<=0)
                printf("Case %d: can't determine\n",c);

            else
                printf("Case %d: %0.3f\n",c,p);



        }
    }

    return 0;
}
