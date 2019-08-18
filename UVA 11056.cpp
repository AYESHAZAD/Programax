#include<bits/stdc++.h>
using namespace std;

struct node
{
    string str;
    int res;
    node (string name, int mn, int sec, int ms)
    {
        str = name;
        res = (mn*60000)+(sec*1000)+ms;
    }

    bool operator < (const node& r2) const
    {
        if (res==r2.res)
        {
            string s1 = str,s2=r2.str;
            for (int i=0; i<s1.length(); i++)
                s1[i] = tolower(s1[i]);
            for (int i=0; i<s2.length(); i++)
                s2[i] = tolower(s2[i]);
            return s1<s2;
        }
        return res<r2.res;
    }
};

int main()
{
    int n;
    string s,s1,sp,s2,s3,s4;
    int mn,sec,ms;

    while (cin>>n)
    {
        vector<node> v;
        getchar();
        for (int i=0; i<n; i++)
        {
            //cin>>s1;
            //cin>>sp>>mn>>sp>>sec>>sp>>ms>>sp;
            getline(cin,s);
            istringstream ss(s);
            ss>>s1>>sp>>mn>>sp>>sec>>sp>>ms>>sp;
            v.push_back(node(s1,mn,sec,ms));
        }
        sort (v.begin(), v.end());
        int sz = v.size(),row = 1;

        for (int i=0; i<v.size(); i+=2)
        {
            printf ("Row %d\n",row++);
            if(i==v.size()-1)
                cout<<v[i].str<<endl;
            else
                cout<<v[i].str<<endl<<v[i+1].str<<endl;
        }
        printf ("\n");
    }
    return 0;
}


/*
3
Schumacher : 1 min 23 sec 172 ms
Barrichello : 2 min 12 sec 999 ms
Senna : 0 min 55 sec 582 ms
4
Schumacher : 1 min 23 sec 172 ms
Barrichello : 2 min 12 sec 999ms
Senna : 0 min 55 sec 582 ms
Fangio : 1 min 03 sec 000 ms
2
BadPilot : 59 min 59 sec 999 ms
ABadPilot : 59 min 59 sec 999 ms
*/
