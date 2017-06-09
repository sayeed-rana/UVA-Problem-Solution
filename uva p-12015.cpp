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
    for(int k=1;k<=tc;k++)
    {
        string str1[10],str2[10];
        int Relv[10],temp=0,chek1=0,chek2=0,j=0,m=0;
        for(int i=0;i<10;i++)
        {
          cin>>str1[i]>>Relv[i];
        }
        temp=Relv[0];
        for(int i=0;i<10;i++)
        {
            if(Relv[i]>=temp)
            {
                temp=Relv[i];
                m=i;
            }
        }
        for(int i=0;i<10;i++)
        {
            if(Relv[i]==temp)
            {
              chek1++;
              str2[j]=str1[i];
              j++;
            }
        }
        cout<<"Case #"<<k<<":\n";
        if(chek1==1)
        {
            cout<<str1[m]<<"\n";
        }
        else
        {
            for(int i=0;i<chek1;i++)
            {
               cout<<str2[i]<<"\n";
            }
        }

    }
    return 0;
}
