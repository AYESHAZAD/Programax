#include<bits/stdc++.h>
using namespace std;

struct node
{
    node *next[11];
    bool endmark;

    node()
    {
        for(int i=0; i<10; i++)
            next[i]=NULL;

        endmark=false;
    }
};

void build_trie(string str,int len, node *curr)
{
    for(int i=0; i<len; i++)
    {
        int id=str[i]-'0';

        if(curr->next[id]==NULL)
            curr->next[id]=new node();

        curr=curr->next[id];
    }
    curr->endmark=true;
}

bool search_str(string str,int len,node *curr)
{
    for(int i=0; i<len; i++)
    {
        int id=str[i]-'0';
       
        if(curr->next[id]==NULL)
            return false;

        curr=curr->next[id];
    }


    if(curr->endmark==true)
    {
        for(int i=0; i<10; i++)
        {
            if(curr->next[i])
                return true;
        }
    }

    return false;
}

void delet(node *curr)
{
    for(int i=0; i<10; i++)
    {
        if(curr->next[i])
            delet(curr->next[i]);
    }
    delete(curr);
}


int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        string s[10005];
        node *root=new node();
        cin>>n;

        for(int i=0; i<n; i++)
        {
            cin>>s[i];
            build_trie(s[i],s[i].size(),root);
        }
        bool x=false;
        int f=0;
        for(int i=0; i<n; i++)
        {
            x=search_str(s[i],s[i].size(),root);
            if(x==true)
            {
                f=1;
                break;
            }
        }

        if(f==1)
            printf("NO\n");
        else
            printf("YES\n");

        delet(root);
    }
    return 0;
}

/*
2
3
911
97625999
91125426
5
113
12340
123440
12345
98346
*/
