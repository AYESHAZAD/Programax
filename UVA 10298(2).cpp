#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(cin>>s&&s!=".")
    {
        int len,f=1,i,j;
        len=s.size();
        for(i=1; i<len-1; i++)
        {
            if(len%i!=0)/// ev or od size check
                continue;

            for(j=i; j<len; j++)
            {
                if(s[j]!=s[j%i])
                {
                    f=0;
                    break;
                }
            }
            if(f==1)
                break;
            f=1;
        }

        if(f==1)
            printf("%d\n",len/i);
        else
            printf("%d\n",i);

    }
    return 0;
}
