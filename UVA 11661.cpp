#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int a[2000001],b[2000001];
int main()
{
    int l;
    while(cin>>l)
    {

        if(l==0)
            break;
        string s;
        cin>>s;
        int f=0;
        for(int i=0; i<l; i++)
        {
            if(s[i]=='Z')
                f=1;
        }

        if(f==1)
            printf("0\n");

        else
        {

            int p=0,q=0;
            for(int i=0; i<l; i++)
            {
                if(s[i]=='R')
                    a[p++]=i;

                else if(s[i]=='D')
                    b[q++]=i;


            }
            if(p>0 && q>0)
            {

                long long mn=99999999;
                for(int i=0; i<p; i++)
                {
                    for(int j=0; j<q; j++)
                    {
                        if(mn>abs(a[i]-b[j]))
                            mn=abs(a[i]-b[j]);
                    }
                }
                printf("%lld\n",mn);

            }


            else
                printf("0\n");
        }
    }
    return 0;
}
