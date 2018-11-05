#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
#include<cstring>

using namespace std;
string s,s1;
stack <string> st;
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {

        cin>>s;

        if(s=="Sleep")
        {
            cin>>s1;
            st.push(s1);

        }

        else if(s=="Test" && !st.empty())
        {
            cout<<st.top()<<endl;
        }

        else if(s=="Kick" && !st.empty())
        {
            st.pop();
        }


        if( s=="Test" && st.empty())
        {
            printf("Not in a dream\n");
        }

    }
    return 0;
}
