#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int dist[500];
vector<int> node[500];
void bfs(int src)
{
    queue<int> q;
    dist[src]=0;
    q.push(src);

    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0; i<node[u].size(); i++)
        {
            int v=node[u][i];
            if(dist[v]==-1)
            {
                dist[v]=dist[u]+1;
                q.push(v);
            }
        }
    }

}




int main()
{
    int t;
    cin>>t;


    while(t--)
    {

        vector<string> v1,v2;
        map<string,int>mp;
        string s;
        int c=0,k=0,p;
        while(cin>>s&&s!="*")
        {
            v1.push_back(s);
            v2.push_back(s);
            mp[s]=k++;
            c++;
        }



        for(int i=0; i<c-1; i++)
        {
            for(int q=i+1; q<c; q++)
            {

                if(v1[i].size()==v2[q].size())

                {
                    int l=v1[i].size();
                    p=0;
                    for(int j=0; j<l; j++)
                    {
                        if(v1[i][j]!=v2[q][j])
                        {
                            p++;
                        }

                    }


                    if(p==1)
                    {
                        node[mp[v1[i]]].push_back(mp[v2[q]]);
                        node[mp[v2[q]]].push_back(mp[v1[i]]);
                    }


                }

            }
        }
        string sp,s1,s2;
         getchar();
        while(getline(cin,sp)&& sp!="")
        {
            int e,f;
            istringstream ss(sp);
            ss >> s1 >> s2;
            e=mp[s1];
            f=mp[s2];
            memset(dist,-1,sizeof dist);
            bfs(e);
            cout<<s1<<" "<<s2<<" "<<dist[f]<<endl;
        }



        if(t>0)
            cout<<endl;


        mp.clear();
        v1.clear();
        v2.clear();

        for(int i=0; i<c; i++)
        {
            node[i].clear();
        }


    }
    return 0;
}
