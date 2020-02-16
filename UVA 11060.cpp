#include<bits/stdc++.h>
using namespace std;
typedef vector<int> ii;
ii node[105];
ii vc;
int in[105];

void top_bfs(int n)
{
    priority_queue<int, vector<int>, greater<int> >q;

    for(int i=1;i<=n;i++)
    {
        if(in[i]==0)
            q.push(i);
    }

    while(!q.empty())
    {
        int u=q.top();

        vc.push_back(u);
        q.pop();

        for(int i=0;i<node[u].size();i++)
        {
            int v=node[u][i];
            in[v]--;

            if(in[v]==0)
            {
                //cout<<v<<endl;
                q.push(v);
            }



        }
    }
}


int main()
{
    int n,c=0;

    while(cin>>n)
    {
        int m;
        map<string,int> mp;
        map <int,string> mp2;
        memset(in,0,sizeof in);
        c++;

        for(int i=1;i<=n;i++)
        {
            string s;
            cin>>s;
            mp[s]=i;
            mp2[i]=s;
        }

       scanf("%d",&m);

       for(int i=0;i<m;i++)
       {
           string s1,s2;
           cin>>s1>>s2;
           node[mp[s1]].push_back(mp[s2]);
           in[mp[s2]]++;
       }


        top_bfs(n);
       printf("Case #%d: Dilbert should drink beverages in this order:",c);
        for(int i=0;i<vc.size();i++)
        {

            cout<<" "<<mp2[vc[i]];
        }

       printf(".\n\n");

        for(int i=0;i<=n;i++)
            node[i].clear();

        vc.clear();
        mp.clear();
        mp2.clear();





    }

    return 0;
}



