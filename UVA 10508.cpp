#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t1,t2;
    while(cin>>t1>>t2)
    {
        string s1[10005],s2[10005],s;
        int p;
        for(int i=0; i<t1; i++)
            cin>>s1[i];

        s=s1[0];
        s2[0]+=s1[0];
        for(int i=1; i<t1; i++)
        {
            p=0;
            for(int j=0; j<t2; j++)
            {
                if(s[j]!=s1[i][j])
                    p++;
            }

            s2[p]+=s1[i];
        }


        for(int i=0; i<t1; i++)
            cout<<s2[i]<<endl;

    }
    return 0;
}



