#include<iostream>
#include<map>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    map<string,string> mp;
    string s1,s2,s3;
    cin>>n;
    getchar();
    for(int i=0; i<n; i++)
    {
        getline(cin,s1);
        getline(cin,s2);
        mp[s1]=s2;
    }

    cin>>q;
    getchar();
    while(q--)
    {
        getline(cin,s3);
        cout<<mp[s3]<<endl;
    }
    mp.clear();

    return 0;
}
