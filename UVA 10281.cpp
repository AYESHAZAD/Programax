#include<bits/stdc++.h>
using namespace std;


int main()
{
    double ans=0,cv=0,last=0.0,d=0.0;
    //char arr[1005];
    string s;


    while(getline(cin,s))
    {
        if(s=="")
            break;

        string s1,s2;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==':')
                s1+=' ';
            else
                s1+=s[i];
        }

        for(int i=0; i<8; i++)
            s2+=s[i];

        istringstream ss(s1);
        long long hh,mm,sec;
        ss>>hh>>mm>>sec;
        //cout<<hh<<" "<<mm<<" "<<sec<<endl;

        cv=hh+(mm/60.0)+(sec/3600.0);

        if(s[8]=='\0')
        {
            ans+=(cv-last)*d;

            cout<<s2;
            printf(" %0.2lf km\n",ans);
        }

        else
        {
            ans+=(cv-last)*d;
            ss>>d;

        }
        last=cv;

    }
    return 0;
}


/*

00:00:01 100
00:15:01
00:30:01
01:00:01 50
03:00:01
03:00:05 140

*/
