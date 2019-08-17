#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s;
    map<string,int> mp;
    queue <string > q;
    int p=1;

    for(int i='a'; i<='z'; i++)
        q.push(string(1,i));

    while(q.empty()==false)
    {
        s=q.front();

        q.pop();

        mp[s]=p++;
        if(s.size()==5)
            continue;
        // cout<<s<<endl;

        for(char i=s[s.size()-1]+1; i<='z'; i++)
            q.push(s+i);

    }

    while(cin>>s1)
    {
        if(mp.find(s1)!=mp.end())
            cout<<mp[s1]<<endl;
        else
            cout<<0<<endl;
    }
    return 0;
}
