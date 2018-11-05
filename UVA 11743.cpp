#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int a[20],b[20],m[20],z[20];

int sum_digit(int n)
{
    int t=0;
    while(n>0)
    {
        t+=n%10;
        n=n/10;
    }
    return t;
}


int main()
{
    int n,sum1,sum2,sum;

    scanf("%d",&n);
    getchar();
    while(n--)
    {
        string s,s1="";
        getline(cin,s);
        //cout<<s;
        int l=s.length();
        for(int i=0; i<l; i++)
        {
            if(s[i]!=' ')
            {
                s1+=s[i];
            }
        }

        //cout<<s1;
        int x=s1.length(),ans=0,p=1;
        for(int i=0; i<x; i++)
        {
            ans=s1[i]-48;
            a[p++]=ans;


        }
        int q=0,r=0,d=0;
        for(int i=1; i<=p; i++)
        {
            if(i%2!=0)
            {
                b[q++]=a[i];
            }
            else
            {
                m[r++]=a[i];
            }
        }

        for(int j=0; j<q; j++)

        {
            z[d++]=b[j]+b[j];

        }

        sum1=0;
        for(int j=0; j<d; j++)
        {
            sum1+=sum_digit(z[j]);
        }



        sum2=0;
        for(int j=0; j<r; j++)

        {
            sum2+=m[j];

        }

        sum=sum1+sum2;
        // cout<<sum;

        if(sum%10==0)
        {
            printf("Valid\n");
        }
        else
        {
            printf("Invalid\n");
        }

    }
    return 0;

}
