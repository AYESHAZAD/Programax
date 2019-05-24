#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    while(getline(cin,s1)&& getline(cin,s2))
    {
        if(s1==""|| s2=="")
            break;

        vector<int> v1,v2;
        int x,y,q=0,p=0,r=0,s=0,u=0,v=0;


        istringstream ss(s1);

        while(ss>>x)
        {
            v1.push_back(x);
        }

        istringstream sp(s2);
        while(sp>>y)
        {
            v2.push_back(y);
        }

        if(v1.size()>v2.size())
        {
            q=v2.size();
            for(int i=0; i<v1.size(); i++)
            {
                for(int j=0; j<v2.size(); j++)
                {
                    if(v1[i]==v2[j])
                    {
                        p++;
                        break;
                    }

                }
            }

            if(p>0&& p==q)
                printf("B is a proper subset of A\n");

            else if(p==0)
                printf("A and B are disjoint\n");

            else
                printf("I'm confused!\n");




        }

        else if(v2.size()>v1.size())
        {
            r=v1.size();
            for(int i=0; i<v2.size(); i++)
            {
                for(int j=0; j<v1.size(); j++)
                {
                    if(v2[i]==v1[j])
                    {
                        s++;
                        break;
                    }

                }
            }

            if(s>0&& s==r)
                printf("A is a proper subset of B\n");

            else if(s==0)
                printf("A and B are disjoint\n");

            else
                printf("I'm confused!\n");

        }

        else if(v2.size()==v1.size())
        {
            u=v1.size();
            for(int i=0; i<v1.size(); i++)
            {
                for(int j=0; j<v2.size(); j++)
                {
                    if(v1[i]==v2[j])
                    {
                        v++;

                        break;
                    }

                }
            }

            if(v>0&&v==u)
                printf("A equals B\n");

            else if(v==0)
                printf("A and B are disjoint\n");

            else
                printf("I'm confused!\n");
        }


    }

    return 0;
}

/*
55 27
55 27
9 24 1995
9 24
1 2 3
1 2 3 4
1 2 3
4 5 6
1 2
2 3
*/
