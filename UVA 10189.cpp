#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;

char arr[105][105];
char a[105][105];

int main()
{
    int m,n,c=0;
    while(cin>>n>>m)
    {

        c++;

        if(n==0&&m==0)
        {
            break;
        }

        getchar();
        for(int i=0;i<n; i++)
        {
            for(int j=0;j<m; j++)
            {
                cin>>arr[i][j];
            }
        }



        int cnt;

        for(int i=0;i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                  cnt=0;

                if(arr[i][j]!='*')
                {
                    if(arr[i][j-1]=='*')
                    {
                        cnt++;
                    }
                    if(arr[i][j+1]=='*')
                    {
                        cnt++;
                    }

                    if(arr[i+1][j]=='*')
                    {
                        cnt++;
                    }
                    if(arr[i+1][j-1]=='*')
                    {
                        cnt++;
                    }

                    if(arr[i+1][j+1]=='*')
                    {
                        cnt++;
                    }


                    if(arr[i-1][j]=='*')
                    {
                        cnt++;
                    }
                    if(arr[i-1][j-1]=='*')
                    {
                        cnt++;
                    }

                    if(arr[i-1][j+1]=='*')
                    {
                        cnt++;
                    }
                // cout<<cnt<<endl;

                    a[i][j]='0'+cnt;


                }

                else
                {
                    a[i][j]='*';
                }


            }


        }
           if(c>1)
          cout<<endl;

        printf("Field #%d:\n",c);
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cout<<a[i][j];
            }
            cout<<endl;
        }

       memset(arr,0,sizeof arr);
       memset(a,0,sizeof a);


    }


    return 0;
}

