#include<bits/stdc++.h>
using namespace std;

struct node
{
    node *next[5];
    bool endmark;

    node()
    {
        for(int i=0; i<2; i++)
            next[i]=NULL;

        endmark=false;
    }

};

void build_trie(string str, int len, node *curr)
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
        int id= str[i]-'0';

        if(curr->next[id]==NULL)
            return false;

        curr=curr->next[id];
    }

    if(curr->endmark==true)
    {
        for(int i=0; i<2; i++)
        {
            if(curr->next[i])
                return true;
        }
    }


    return false;
}


void delet(node *curr)
{
    for(int i=0; i<2; i++)
    {
        if(curr->next[i])
            delet(curr->next[i]);
    }
    delete(curr);
}



int main()
{
    int c=0;
    string s1;
    while(cin>>s1)
    {
        node *root= new node();
        string ss[10],s2;
        int p=0;
        ss[p]=s1;
        p++;
        build_trie(s1,s1.size(),root);
        c++;
        while(cin>>s2)
        {
            if(s2=="9")
                break;
            ss[p]=s2;
            p++;

            build_trie(s2,s2.size(),root);

        }

        bool x=false;
        int f=0;

        for(int i=0; i<p; i++)
        {
            x=search_str(ss[i],ss[i].size(),root);
            if(x==true)
            {
                f=1;
                break;
            }
        }

        if(f==1)
        {
            printf("Set %d is not immediately decodable\n",c);
        }
        else
            printf("Set %d is immediately decodable\n",c);


        delet(root);


    }

    return 0;

}


/*
01
10
001
00000
9
01
10
010
0000
9

*/

