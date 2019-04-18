#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s;
    while(cin>>s)
    {
        if(s=="0")
            break;


            int ans=0;
            for(int i=0;i<s.size();i++)
            {

                ans=(ans*10)+(s[i]-48);
                ans=ans%17;
            }

            if(ans==0)
           printf("1\n");

           else
             printf("0\n");
    }
    return 0;
}
