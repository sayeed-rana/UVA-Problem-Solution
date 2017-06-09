/*
S.M. Sayeed
CSE'12 JUST
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    cout<<"Lumberjacks:\n";
    while(tc--)
    {
        int Val[10],temp=0,m=0,chek1=0,small=0,r=0,chek2=0;
        for(int i=0;i<10;i++)
        {
            cin>>Val[i];
        }
        temp=Val[0];
        small=Val[0];
        for(int i=0;i<10;i++)
        {
            if(Val[i]>=temp)
            {
                temp=Val[i];
                chek1++;
                m=i;
            }
            if(Val[i]<=small)
            {
                small=Val[i];
                chek2++;
                r=i;
            }
        }
        if((m==9 && r==0 && chek1==10)||(m==0 && r==9 && chek2==10))
        {
            cout<<"Ordered\n";
        }
        else
           cout<<"Unordered\n";

    }
    return 0;
}


