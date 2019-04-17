#include <bits/stdc++.h>
using namespace std;
struct node
{
    int u, v, w;
    node(int a, int b, int c)
    {
        u = a;
        v = b;
        w = c;
    }
    bool operator < (const node& p) const
    {
        return w < p.w;
    }
};
vector <node> edge;
int par[100005],cnt=0;
int find (int u)
{
    if(u != par[u])
        par[u] = find(par[u]);

    return par[u];
}
int krush_kal (int n)
{
    int u , v,cost;
    sort(edge.begin(), edge.end());
    for(int i = 0; i <= n; i++)
    {
        par[i] = i;
    }
    cnt = 0;
    cost = 0;
    for(int i = 0; i < (int)edge.size(); i++)
    {

        u = find(edge[i].u);
        v = find(edge[i].v);

        if(u != v)
        {
            cnt++;
            par[u]=v;
            cost += edge[i].w;
            if(cnt == n - 1)
                break;
        }
    }
    return cost;
}
int main()
{
    int n,m,t,a,c=0;
    scanf("%d",&t);

    while(t--)
    {
        cin>>n>>m>>a;
        int s,res,p;
        c++;
        for(int i=0; i<m; i++)
        {
            int x,y,c;
            cin>>x>>y>>c;

            if(c<a)
                edge.push_back(node(x,y,c));

        }
        s=krush_kal(n);

        p=n-cnt;
        res=(a*p)+s;


        printf("Case #%d: %d %d\n",c,res,p);

        edge.clear();

    }
    return 0;
}

/*
2
4 4 100
1 2 10
4 3 12
4 1 41
2 3 23
5 3 1000
1 2 20
4 5 40
3 2 30
*/
