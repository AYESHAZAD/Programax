#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        vector<int> v;
        string s;
        getline(cin,s);
        istringstream pp(s);
        int x,z;
        while(pp>>x)
        {
           v.push_back(x);
        }
        int mx=0;
        for(int i=0;i<v.size();i++)
        {
             for(int j=i+1;j<v.size();j++)
             {
                 z=__gcd(v[i],v[j]);
                 if(mx<z)
                 {
                     mx=z;
                 }

             }
        }

        printf("%d\n",mx);
    }

    return 0;
}
