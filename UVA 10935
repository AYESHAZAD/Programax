#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,y;
    while(cin>>n)
    {
        queue<int>q;
        if(n==0)
        {
            break;
        }
        for(int i=1; i<=n; i++)
        {
            q.push(i);
        }
        printf("Discarded cards:");
        while(q.size()>1)
        {
            cout<<" " <<q.front();
            q.pop();
            y=q.front();

             q.pop();

            if (!q.empty())
				printf(",");
			 q.push(y);

        }

        printf("\nRemaining card: ");
        cout<<q.front()<<endl;
        q.pop();

    }

    return 0;
}
