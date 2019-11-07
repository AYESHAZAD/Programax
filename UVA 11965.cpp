#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,c=0;
    scanf("%d",&t);

    while(t--)
    {
        c++;

        printf("Case %d:\n",c);

        scanf("%d",&n);
        getchar();

        for(int i=0; i<n; i++)
        {
            string s,s1="";

            getline(cin,s);

            //s1+=s;
            for(int j=0; j<s.size(); j++)
            {
                if(s[j]==' '&& s[j+1]==' '&& s[j+2]==' '&& s[j+3]==' ')
                {
                    
                    s.erase(s.begin()+j);
                    s.erase(s.begin()+j+1);
                   
                    j=-1;
                }
                else if(s[j]==' '&& s[j+1]==' ')
                {
                   
                    s.erase(s.begin()+j);
                    j=-1;

                }
            }

            cout<<s<<endl;
        }

        if(t>0)
            printf("\n");

    }

    return 0;
}

/*
2
3
Sample test one:
  there was 2 spaces and
there are also  2  spaces
2
Sample test two:
    there was 4 spaces

*/












