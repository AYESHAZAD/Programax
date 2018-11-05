#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x;
    while(cin>>n)
    {
        priority_queue< int,vector<int>,greater<int> > p;

        if(n==0)
        {
            break;
        }
        for(int i=1; i<=n; i++)
        {
            cin>>x;
            p.push(x);
        }

        int t=0,c=0;


        while(p.size()>1)
        {
            t=p.top();
            p.pop();
            t=t+p.top();

            p.push(t);
            p.pop();


            c=c+t;


        }
       
        cout<<c<<endl;



    }
    return 0;
}



