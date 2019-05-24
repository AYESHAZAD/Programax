#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
#include<cstring>

using namespace std;

int main()
{
    int t,c=0;
    string s;
    scanf("%d",&t);

    while(t--)
    {
      
        c++;
        int y=5,f=0,x;
        while (y--)
        {
           
            string s1="";

            cin>>s;
            
            for(int i=0; i<5; i++)
            {
                if(s[i]=='|'|| s[i]=='>' || s[i]=='<')
                {

                    s1+=s[i];

                }
            }
            x=s1.length();
            

            for(int i=0; i<x; i++)
            {
                if(s1[i]=='|'&&s1[i+1]=='>')
                {
                    f=1;
                    break;
                }

                else if(s1[i]=='<'&&s1[i+1]=='|')
                {
                    f=1;
                    break;
                }
            }



        }

        if(f==1)
        {
            printf("Case %d: No Ball\n",c);
        }
        else
        {
            printf("Case %d: Thik Ball\n",c);
        }

    }
    return 0;


}
