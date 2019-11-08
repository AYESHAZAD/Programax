#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,s1[101];
    int p=0,mx=0;
    while(getline(cin,s))
    {
        if(s=="")
            break;

        s1[p]+=s;
        if(s1[p].size()>mx)
            mx=s1[p].size();

        p++;

    }

    for(int j=0; j<mx; j++)
    {
        for(int i=p-1; i>=0; i--)
        {
            if(s1[i].size()>j)
                cout<<s1[i][j];
            else
                cout<<" ";
        }
        printf("\n");
    }

    return 0;
}


/*
Rene Decartes once said,
"I think, therefore I am."
*/
