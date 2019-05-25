#include<bits/stdc++.h>
using namespace std;
int str(string s1,string s2)
{
    if(s1.size()>s2.size())
        return 0;
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]!=s2[i])
            return 0;
    }
    return 1;
}
int main()
{
    int t,n;
    scanf("%d",&t);

    while(t--)
    {
        string s[10010];
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>s[i];
        int p,f=0;
       sort(s,s+n);
       for(int i=0;i<n;i++)
        cout<<s[i]<<endl;

      for(int i=0;i<n-1;i++)
       {
           int x=str(s[i],s[i+1]);
           if(x)
           {
               f=1;
               break;
           }
       }

       if(f==1)
        printf("NO\n");
       else
         printf("YES\n");

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
