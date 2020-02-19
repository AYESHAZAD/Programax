#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while(cin>>n)
    {
        if(n==0)
            break;

       map< string,int> mp;
       map< string,int> :: iterator it;
       int mx=0,cnt=0;
        while(n--)
        {
            vector <string> str;
            string s;

            for(int i=0;i<5;i++)
            {
                string s;
                cin>>s;
                str.push_back(s);
            }

            sort(str.begin(),str.end());

            for(int i=0;i<5;i++)
            {
                s+=str[i];
            }
            mp[s]++;

            if(mx<mp[s])
                mx=mp[s];


        }


        for(it=mp.begin();it!=mp.end();it++)
        {
            if(it->second==mx)
                cnt+=mx;
        }

        printf("%d\n",cnt);
        mp.clear();
    }

    return 0;
}

/*

3
100 101 102 103 488
100 200 300 101 102
103 102 101 488 100
3
200 202 204 206 208
123 234 345 456 321
100 200 300 400 444
0
*/

