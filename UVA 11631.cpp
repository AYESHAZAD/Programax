#include<bits/stdc++.h>
using namespace std;

struct node
{
    int u,v,w;
    node(int a ,int b,int c)
    {
        u=a;
        v=b;
        w=c;
    }

    bool operator <(const node &p)const
    {
        return w<p.w;
    }
};

vector<node> edge;
int par[1000004];

int find(int u)
{
    if(u!=par[u])
        par[u]=find(par[u]);

    return par[u];
}


int krushkal(int n)
{
    int u,v,cost,cnt;
    sort(edge.begin(),edge.end());

    for(int i=0; i<n; i++)
        par[i]=i;

    cost=0;
    cnt=0;

    for(int i=0; i<edge.size(); i++)
    {
        u=find(edge[i].u);
        v=find(edge[i].v);

        if(u!=v)
        {
            cnt++;
            par[u]=v;
            cost+=edge[i].w;

            if(cnt==n-1)
                break;
        }
    }

    return cost;
}


int main()
{
    int m,n;
    while(cin>>m>>n)
    {
        if(m==0&&n==0)
            break;

        int sum=0,res;

        for(int i=0; i<n; i++)
        {
            int u,v,w;
            cin>>u>>v>>w;
            sum+=w;
            edge.push_back(node(u,v,w));
        }
        res=sum-krushkal(n);
        printf("%d\n",res);

        edge.clear();


    }
    return 0;
}

/*
7 11
0 1 7
0 3 5
1 2 8
1 3 9
1 4 7
2 4 5
3 4 15
3 5 6
4 5 8
4 6 9
5 6 11

0 0

*/
