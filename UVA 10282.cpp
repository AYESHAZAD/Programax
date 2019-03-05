#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
    string s,s1,s2,s3;
    map<string,string> mp;
    while(getline(cin,s))
    {
        if(s=="")
            break;

        istringstream ss(s);
        ss >> s>> s1;

        mp[s1]=s;
    }

    /* map<string,string>::iterator it;
    for(it=mp.begin();it!=mp.end();it++)
        cout<<it->first<<" "<<it->second<<endl;*/

    while(cin>>s3)
    {
        if(mp[s3]=="")
            cout<<"eh"<<endl;

        else
            cout<<mp[s3]<<endl;
    }


    return 0;
}
/*

dog ogday
cat atcay
pig igpay
froot ootfray
loops oopslay

atcay
ittenkay
oopslay
*/

