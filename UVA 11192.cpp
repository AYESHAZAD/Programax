#include<bits/stdc++.h>

using namespace std;

int main()
{
    int g;
    while(cin>>g)
    {
        if(g==0)
            break;

        getchar();
        string s;
        cin>>s;


        int c=s.size()/g;

        for(int i=0; i<s.size(); i+=c)
        {

            for(int j=i+c-1; j>=i; j--)
            {

                cout<<s[j];
            }
        }
        cout<<endl;
    }
    return 0;
}



