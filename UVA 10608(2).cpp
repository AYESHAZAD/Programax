#include<bits/stdc++.h>
using namespace std;
int parent[30005],rk[30005],arr[30005];

void built(int n)
{
    for(int i=1; i<=n; i++)
    {
        parent[i]=i;
        rk[i]=0;
        arr[i]=0;

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
    int t,n,m;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d%d",&n,&m);
        memset(parent,0,sizeof parent);
      //  memset(arr,0,sizeof arr);

        built(n);
        for(int i=0;i<m; i++)
        {
            int a,b,x,y;
            scanf("%d%d",&a,&b);

            x=make_friend(a);
            y=make_friend(b);

            if(x!=y)
                make_union(x,y);
        }

        for(int i=1; i<=n; i++)
        {
            int z=make_friend(i);

            arr[z]++;
        }

        int mx=0;

        for(int i=1; i<=n; i++)
        {
            if(mx<arr[i])
                mx=arr[i];

        }
        printf("%d\n",mx);

    }
    return 0;
}

/*

2
3 2
1 2
2 3
10 12
1 2
3 1
3 4
5 4
3 5
4 6
5 2
2 1
7 1
1 2
9 10
8 9
*/
