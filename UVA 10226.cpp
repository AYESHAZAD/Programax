#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
#include<map>

using namespace std;

int main()
{
    int t;
    map<string,int> mp;
    map<string,int> ::iterator it;
    string s1;
    cin>>t;
    getchar();
    getchar();
    while(t--)
    {
        double n=0.0,x;
        double cnt=0.0;
        while( getline(cin,s1)&&s1.length()!=0)
        {
            if(mp.count(s1)==0)
            {
                mp[s1]=1;
            }
            else
            {

                mp[s1]=mp[s1]+1;
            }
            cnt++;
        }




        for(it=mp.begin(); it!=mp.end(); it++)
        {

            cout<<it->first<<" "<<fixed<<setprecision(4)<<(it->second)/cnt*100.0<<endl;
        }


        if(t!=0)
        {
            printf("\n");
        }
        mp.clear();
    }
    return 0;
}
