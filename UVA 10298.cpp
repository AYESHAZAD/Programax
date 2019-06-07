#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll prefix[1000005];

void set_prefix(string s)
{
    int i=1,j=0,len;
    len=s.size();

    while(i<len)
    {
        if(s[i]==s[j])
        {
            prefix[i]=j+1;
            i++;
            j++;
        }
        else
        {
            while(j>0&&s[i]!=s[j])
                j=prefix[j-1];

            if(s[i]!=s[j])
            {
                prefix[i]=0;
                i++;
            }
        }
    }
}


int main()
{
    string s1;
    while(cin>>s1)
    {
        if(s1==".")
            break;
        memset(prefix,0,sizeof prefix);
        set_prefix(s1);
        int a,b;
        a=s1.size()-prefix[s1.size()-1];
        b=s1.size()/a;
        printf("%d\n",b);
    }
    return 0;
}
