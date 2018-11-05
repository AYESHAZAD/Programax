#include<bits/stdc++.h>
#include<cstdio>
using namespace std;

int main()
{
    int n;
    string s;

    scanf("%d",&n);
    getchar();
    while(n--)
    {
        stack<char> st;
        getline(cin,s);

        for(int i=0; i<s.length(); i++)
        {
            if(st.size()>0 && s[i]==')'&& st.top()=='(')
            {
                st.pop();

            }
            else if(st.size()>0 && s[i]==']' && st.top()=='[')
            {
                st.pop();

            }

            else
            {
                st.push(s[i]);

            }
        }


        if(st.size()==0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }



    }
    return 0;
}
