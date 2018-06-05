#include<bits/stdc++.h>
#include<cstdio>
#include<map>
using namespace std;

int main()
{
    int n,k,m,x;
    string s;
    char ch;
    double l;
    map<char,int> mp;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&k);

        for(int i=0; i<k; i++)
        {
            cin>>ch>>x;
            mp[ch]=x;
        }
        int sum=0;
        scanf("%d",&m);
        getchar();
        while(m--)
        {
            getline(cin,s);

            for(int i=0; i<s.length(); i++)
            {
                if(!mp[s[i]])
                {
                    sum=sum+0;
                }
                else
                {
                    sum+=mp[s[i]];

                }

            }


        }
        l=sum/100.0;

        printf("%0.2lf$\n",l);
        mp.clear();

    }
    return 0;
}
