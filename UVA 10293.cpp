#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch;

    int arr[40];
    memset(arr,0,sizeof arr);
    int h=0,cnt=0;
    while(scanf("%c",&ch)==1)
    {
       // cout<<ch<<cnt<<endl;
        if(ch=='-')
            h=1;

        else if(h==1&& ch=='\n')
            continue;

        if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
        {
            cnt++;
            h=0;
        }
        else if(ch=='\n'||ch=='.'||ch=='?'||ch==','||ch=='!'|| ch==' ')
        {
            if(cnt>0)
                arr[cnt]++;

            cnt=0;
        }


        if(ch=='#')
        {
            cnt=0;
            for(int i=1; i<=32; i++)
            {
                if(arr[i]!=0)
                    printf("%d %d\n",i,arr[i]);

            }

            memset(arr,0,sizeof arr);
            printf("\n");
        }

    }
    return 0;
}
