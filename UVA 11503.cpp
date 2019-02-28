#include<bits/stdc++.h>
using namespace std;
int parent[100008],rk[100008];


void built()
{
    for(int i=1; i<=100005; i++)
    {
        parent[i]=i;
        rk[i]=1;

    }
}


int make_friend(int n)
{
    if(parent[n]==n)
        return n;
    else
        return parent[n]=make_friend(parent[n]);
}

int make_union(int x,int y)
{
    int a=make_friend(x);
    int b=make_friend(y);

    if(a!=b)
    {


        if(rk[a]>rk[b])
        {
            parent[b]=a;
            rk[a]+=rk[b];
            return rk[a];
        }

        else
        {
            parent[a]=b;

            rk[b]+=rk[a];
            return rk[b];
        }
    }

    return rk[a];

}



int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int f;
        cin>>f;
        built();

        map<string,int> mp;
        int c=1,a,b,z;
        for(int i=0; i<f; i++)
        {
            string s1,s2;
            cin>>s1>>s2;

            if(mp[s1]==0)
                mp[s1]=c++;

            if(mp[s2]==0)
                mp[s2]=c++;

            printf("%d\n",make_union(mp[s1],mp[s2]));


          /*
            a=make_friend(mp[s1]);
            b=make_friend(mp[s2]);

            if(a!=b)
                printf("%d\n",make_union(a,b));

            else
                printf("%d\n",rk[a]);

           */



        }

    }
    return 0;
}

/*
1
3
Fred Barney
Barney Betty
Betty Wilma

*/
