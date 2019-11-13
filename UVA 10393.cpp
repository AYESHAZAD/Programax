#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s[]= {"qaz","wsx","edc","rfvtgb"," "," ","yhnujm","ik","ol.","p;/"};

    int f,n;
    while(scanf("%d%d",&f,&n)==2)
    {
        int arr[20];
         int q=0,mx=0,r=0;
        string s1,ss[1005],s2;

        set<string> st;
        set <string> :: iterator it;

        for(int i=0; i<f; i++)
            scanf("%d",&arr[i]);

        sort(arr,arr+f);


        for(int i=0; i<n; i++)
        {
            cin>>s2;
            st.insert(s2);

        }

        for(it=st.begin(); it!=st.end(); it++)
        {
            s1=*it;
            // cout<<s1<<endl;
            int p,cnt=0,h;

            for(int i=0; i<s1.size(); i++)
            {
                p=0,h=0;
                for(int j=0; j<10; j++)
                {
                    // cout<<j<<"*****"<<p<<"*******"<<cnt<<endl;


                    if(count(arr,arr+f,j+1)==1)
                        continue;

                    //   cout<<j<<" "<<p<<" "<<arr[p]<<" "<<cnt<<endl;



                    for(int k=0; k<s[j].size(); k++)
                    {
                        if(s[j][k]==s1[i])
                        {
                            cnt++;
                            h=1;
                            break;
                        }

                    }

                    //cout<<cnt<<endl;

                    if(h==1)
                        break;


                }
            }

            //cout<<cnt<<endl;
            if(cnt==s1.size())
            {
                ss[q]+=s1;
                if(mx<s1.size())
                    mx=s1.size();
                //cout<<ss[q]<<endl;
                q++;
            }


        }

        sort(ss,ss+q);
        for(int i=0; i<q; i++)
        {
            if(ss[i].size()==mx)
                r++;
        }

        printf("%d\n",r);
        for(int i=0; i<q; i++)
        {
            if(ss[i].size()==mx)
                cout<<ss[i]<<endl;
        }



    }
    return 0;

}


/*

5 5
6 7 8 9 10
the
stewardesses
have
funny
hair
3 18
7 8 9
wax
waxed
waxen
waxer
waxers
waxes
waxing
waxy
we
wear
wearable
wearer
wearing
wears
weave
weaver
weaves
weaving

*/
