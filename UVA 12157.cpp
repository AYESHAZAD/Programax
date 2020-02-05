#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,c=0;;
    scanf("%d",&t);

    while(t--)
    {
        int n,arr[50],a,res1=0,res2=0;
        scanf("%d",&n);
        c++;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a);

            res1+=((a+30)/30);
            res2+=((a+60)/60);
        }
        printf("Case %d: ",c);

        res1*=10;
        res2*=15;

        //cout<<res1<<" "<<res2<<endl;
        if(res1>res2)
            printf("Juice %d\n",res2);

        else if(res1<res2)
            printf("Mile %d\n",res1);

        else
            printf("Mile Juice %d\n",res2);

    }
    return 0;
}
