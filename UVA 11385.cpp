#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long  long int dp[100];

long long int func(int n)
{
    if(n==0||n==1)
    {
        dp[n]=n;
        return n;
    }

    if(dp[n]!=-1)
        return dp[n];

    dp[n]=func(n-1)+func(n-2);
    //cout<<n<<" "<<dp[n]<<endl;
    return dp[n];


}

int main()
{
    int t,n;
    scanf("%d",&t);
    memset(dp,-1,sizeof dp);
    func(80);
    while(t--)
    {
        long long x,y,z,w,a;
        vector<long long > v1;
        vector< pair<long long,char> > v;

        scanf("%d",&n);
        for(int i=0; i<n; i++)
        {
            scanf("%lld",&a);
            v1.push_back(a);
        }

        // sort(arr,arr+n);
        //x=arr[n-1];
        getchar();
        string s,s1,ss;
        getline(cin,s);

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>='A'&& s[i]<='Z')
                s1+=s[i];
        }


        for(int i=0; i<n; i++)
        v.push_back(make_pair(v1[i],s1[i]));


        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());

        for(int i=0; i<v.size(); i++)
        ss+=v[i].second;


        if(v.size()>0)
        x=v[v.size()-1].first;

        z=v[0].first;
        for(int i=2; i<=80; i++)
        {
            if(z==dp[i])
                w=i;

            if(dp[i]==x)
            {
                y=i;
                break;
            }
        }


        for(int i=2; i<=y; i++)
        {
            z=count(v1.begin(),v1.end(),dp[i]);
            if(z!=1)
            ss.insert(i-2,1,' ');

        }

        cout<<ss<<endl;

    }


    return 0;
}



/*
2
11
13 2 89 377 8 3 233 34 144 21 1
OH, LAME SAINT!
15
34 21 13 144 1597 3 987 610 8 5 89 2 377 2584 1
O, DRACONIAN DEVIL!


5
5
8 5 3 2 1
ABCDEFG
4
1 5 2 3
ABCDE
4
1 3 2 5
A a B b C c D d E e
1
13
ABCD
1
3
ABC





*/

