#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        int ans=0,x;
        for(int i=0;i<s.size(); i++)
        {
            if(s[i]=='#')
           {
               if(ans==0)
            printf("YES\n");

        else
            printf("NO\n");

            ans=0;
           }

            else if(s[i]!='\n')
                {
                x=s[i]-48;
                ans=((ans*2)+x)%131071;
                }

        }


    }
    return 0;
}
