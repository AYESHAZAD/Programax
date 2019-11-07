#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        string s,s1[103];
        int j=0;
        while (getline(cin,s))
        {
            if(s=="")
                break;

            for(int i=0; i<s.size(); i++)
            {
                if(s[i]=='0')
                    s[i]=s[i]+31;

               else if(s[i]=='1')
                    s[i]=s[i]+24;

                else if(s[i]=='2')
                    s[i]=s[i]+40;

                else if(s[i]=='3')
                    s[i]=s[i]+18;

                else if(s[i]=='4')
                    s[i]=s[i]+13;

                else if(s[i]=='5')
                    s[i]=s[i]+30;

                else if(s[i]=='6')
                    s[i]=s[i]+17;

                else if(s[i]=='7')
                    s[i]=s[i]+29;
                else if(s[i]=='2')
                    s[i]=s[i]+40;

                else if(s[i]=='8')
                    s[i]=s[i]+10;

                else if(s[i]=='9')
                    s[i]=s[i]+23;



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
H3LL0 MY L0V3, 1 M H499Y 83C4U53 500N 1 W1LL 83 70 Y0UR 51D3. 7H15
71M3 W17H0U7 Y0U H45 833N 373RN4L. 1 1NV173 Y0U 70 7H3 200 0N3 70
533 7H3 238R45 4ND 60R1L45.

*/
