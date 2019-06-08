#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        set<string> st;
        string s1,s2,s3;
        st.insert(s);
        for(int i=0; i<s.size(); i++)
        {
            for(int j=0; j<s.size(); j++)
            {
                s1=s.substr(i,j);
                st.insert(s1);
            }
        }
        int c=0;
        set<string>::iterator it;
        for(it=st.begin(); it!=st.end(); it++)
        {
            s2=*it;
            s3=s2;
            reverse(s3.begin(),s3.end());
            //cout<<s2<<" "<<s3<<endl;
            if(s2==s3&& s2!="")
                c++;



        }
        cout<<"The string '"<<s<<"' contains "<<c<<" palindromes."<<endl;
        st.clear();
    }
    return 0;
}

