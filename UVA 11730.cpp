#include<bits/stdc++.h>
using namespace std;
int prime[3000000],nprime=0,ncnt=0;
int mark[10000002],factor[300];
int visited[10000],arr[10000];

void sieve(int n)
{
    int i,j,limit=sqrt(n*1)+2;
    mark[1]=1;

    for(i=4; i<=n; i+=2)
    {
        mark[i]=1;
    }
    prime[nprime++]=2;

    for(i=3; i<=n; i++)
    {
        if(!mark[i])
        {
            prime[nprime++]=i;

            if(i<=limit)
            {
                for(j=i*i; j<=n; j+=i*2)
                {
                    mark[j]=1;
                }
            }
        }
    }



}

void p_factor(int a)
{
    int y=a;
    for(int i=0; prime[i]<=sqrt(a); i++)
    {
        while(a%prime[i]==0)
        {
            factor[ncnt++]=prime[i];
            a=a/prime[i];
        }
    }
    if(a>1)
    {
        factor[ncnt++]=a;
    }

}

int bfs(int x,int y)
{

    int sum,c1=0,c2;
    queue<int> q;

    q.push(x);

    arr[x]=0;
    while(!q.empty())
    {
        int v=q.front();
        q.pop();

        if(v==y)
        return arr[v];

        if(visited[v]==1)
            continue;


            visited[v]=1;

        ncnt=0,sum=0;
        memset(factor,0,sizeof factor);
        p_factor(v);


        for(int i=0; i<ncnt; i++)
        {
            sum=v+factor[i];

            if(arr[sum]==0)
                arr[sum]=arr[v]+1;

            if(sum<=y && v!=factor[i])
                q.push(sum);

        }


    }
    return -1;

}

int main()
{
    int s,t,n,tes=0;
    sieve(10000);
    while(cin>>s>>t)
    {
        if(s==0 && t==0)
            break;
        tes++;
        n=0;
        memset(arr,0,sizeof arr);
        memset(visited,0,sizeof visited);
        n=bfs(s,t);

        printf("Case %d: %d\n",tes,n);



    }

    return 0;
}
