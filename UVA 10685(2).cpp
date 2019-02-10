#include<bits/stdc++.h>
using namespace std;

int parent[5020],rk[5020],arr[5001];

void built(int n)
{
    for(int i=1; i<=n; i++)
       {
        parent[i]=i;
        rk[i]=0;
       }
}

int make_friend(int n)
{
    if(parent[n]==n)
        return n;

    else
        return parent[n]=make_friend(parent[n]);
}


void make_union(int a,int b)
{
    if(rk[a]>rk[b])
        parent[b]=a;

    else
    {
        parent[a]=b;
        if(rk[a]==rk[b])
            rk[b]++;

    }
}


int main()
{
    int c,r;
    while(cin>>c>>r)
    {

        if(c==0&&r==0)
            break;

        map<string,int> mp;
        int x=1;

        for(int i=0; i<c; i++)
        {
            string s;
            cin>>s;
            mp[s]=x++;

        }
        memset(parent,0,sizeof parent);
        memset(arr,0,sizeof arr);

        built(c);

        while(r--)
        {
            string s1,s2;
            cin>>s1>>s2;


            int a=make_friend(mp[s1]);
            int b=make_friend(mp[s2]);

            if(a!=b)
            make_union(a,b);

        }

        for(int i=1; i<=c; i++)
        {
            int x= make_friend(i);
            arr[x]++;


        }
        int mx=0;
        for(int i=1; i<=c; i++)
        {
            if(mx<arr[i])
                mx=arr[i];
        }

        printf("%d\n",mx);



    }

    return 0;
}


/*
5 2
caterpillar
bird
horse
elefant
herb
herb caterpillar
caterpillar bird
*/
