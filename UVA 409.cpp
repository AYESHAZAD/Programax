#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,e,c=0;
    while(cin>>k>>e)
    {
        string s[25],sp;
        vector < pair<string,int> > v;
        c++;
        for(int i=0; i<k; i++)
        {
            cin>>s[i];
        }
        int mx=0;
        getchar();
        while(e--)
        {
            getline(cin,sp);
            string sx,s1;

            for(int i=0; i<sp.size(); i++)
            {
                if(sp[i]>='A' && sp[i]<='Z')
                {
                    sx+=sp[i]+32;
                }

                else
                    sx+=sp[i];

            }

            //cout<<sx<<endl;
            string temp="";
            int cnt=0;
            for(int i=0; i<k; i++)
            {
                for(int j=0; j<sx.size(); j++)
                {
                    if(!isalpha(sx[j]))
                    {
                        //cout<<temp<<" ";
                        if(temp==s[i])
                        {
                            // cout<<temp<<" ";
                            cnt++;

                        }
                        temp="";
                    }

                    else
                    {
                        temp+=sx[j];
                        //cout<<temp;
                    }

                }

                if(temp==s[i])
                {
                    //cout<<temp<<" ";
                    cnt++;

                }
                else
                    temp="";

            }

            //cout<<cnt<<endl;









            // cout<<sx<<endl;

            /* istringstream ss(sx);

             while(ss>>s1)
             {
                 // cout<<s1<<endl;

                 for(int i=0; i<k; i++)
                 {
                     if(s1==s[i])
                     {
                         cnt++;
                         break;
                     }
                 }
             }*/

            //cout<<cnt<<endl;
            v.push_back(make_pair(sp,cnt));

            if(mx<cnt)
                mx=cnt;

        }

        printf("Excuse Set #%d\n",c);
        for(int i=0; i<v.size(); i++)
        {
            if(v[i].second==mx)
            {
                cout<<v[i].first<<endl;
            }
        }
        printf("\n");
    }

    return 0;
}

/*
5 3
dog
ate
homework
canary
died
My dog ate my homework.
Can you believe my dog died after eating my canary... AND MY HOMEWORK?
This excuse is so good that it contain 0 keywords.
6 5
superhighway
crazy
thermonuclear
bedroom
war
building
I am having a superhighway built in my bedroom.
I am actually crazy.
1234567890.....,,,,,0987654321?????!!!!!!
There was a thermonuclear war!
I ate my dog, my canary, and my homework ... note outdated keywords?

*/




