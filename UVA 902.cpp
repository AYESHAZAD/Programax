#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string  s;
    while(cin>>n>>s)
    {
        int mx=0;
        string ss,s1;
        map<string,int> mp;
        for(int i=0; i<s.size(); i++)
        {

            ss=s.substr(i,n);
            // cout<<ss<<endl;
            if(ss.size()==n)
            {
                mp[ss]++;
            }

        }

        map<string,int>::iterator it;
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            if(mx<it->second)
            {
                mx=it->second;
                s1=it->first;
            }
        }
        cout<<s1<<endl;
        mp.clear();
    }
    return 0;
}
/*
3 baababacb
*/
