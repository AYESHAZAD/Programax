#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int  arr[500006];
int b_search1(int n,int s)
{
    int l,h,mid;
    l=1;
    h=n;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(arr[mid]<s)
            l=mid+1;
        else
            h=mid-1;

    }
    if(h <= 0)
        return -1;
    else
    return h;
}

int b_search2(int n,int s)
{
    int l,h,mid;
    l=1;
    h=n;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(arr[mid]>s)
            h=mid-1;
        else
            l=mid+1;

    }
    if(l > n)
        return -1;
    return l;
}

int main()
{
    //freopen("raju.txt", "w+", stdout);
    int q,a,n;
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>arr[i];
    cin>>q;
    while(q--)
    {
        cin>>a;
        int x=b_search1(n,a);
        int y=b_search2(n,a);

        //cout<<y << " " << x << endl;

        if(x != -1)
            printf("%d",arr[x]);
        else printf("X");

        printf(" ");
        if(y != -1)
            printf("%d", arr[y]);
        else
            printf("X");
        cout<< endl;

    }
    return 0;
}


/*
#include<bits/stdc++.h>
using namespace std;
int arr[500006];

int main()
{
    int n,q,a,low,upp;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cin>>q;
    while(q--)
    {
        cin>>a;
        int l=lower_bound(arr,arr+n,a)-arr;
        int u=upper_bound(arr,arr+n,a)-arr;

        low=l-1;
        upp=u;
      // cout<<low<<" "<<upp<<endl;
        //cout<<arr[low]<<" "<<arr[upp]<<endl;

        if(low==-1)
            printf("X");
        else
            printf("%d",arr[low]);

        printf(" ");
             if(upp==n)
            printf("X");
        else
            printf("%d",arr[upp]);

         printf("\n");


    }
    return 0;
}

*/



/*
Input/Output
4
1 4 5 7
4
4 6 8 10
1 5
5 7
7 X
7 X



5
2 2 2 4 6
4
2 5 7 7

X 4
4 6
6 X
6 X

4
1 4 5 7
8
1 2 3 4 5 6 7 8

X 4
1 4
1 4
1 5
4 7
5 7
5 X
7 X


20
1 1 1 2 2 2 3 3 3 3 3 3 3 4 4 4 5 5 5 6
7
7 6 5 4 3 2 1
6 X
5 X
4 6
3 5
2 4
1 3
X 2
*/
