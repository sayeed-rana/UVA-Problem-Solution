#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        int num;
        cin>>num;
        int call[19]={0},totalm=0,totalj=0;
        for(int j=0;j<num;j++)
        {
            cin>>call[j];
        }
        for(int j=0;j<num;j++)
        {
            int k=call[j]%29;
            int m=call[j]%59;
            if(k==0)
            {
                totalm+=((call[j]/29)*10);
            }
            else
            {
                totalm+=int((1+(call[j]/29))*10);
            }
            if(m==0)
            {
                totalj+=((call[j]/59)*15);
            }
            else
            {
                totalj+=int((1+(call[j]/59))*15);
            }
        }
        cout<<"Case "<<i<<": ";
        if(totalm==totalj)
        {
           cout<<"Mile Juice ";
           cout<<totalm<<"\n";
        }
        else
            {
                int h=min(totalm,totalj);
                if(h==totalm)
                {
                  cout<<"Mile ";
                   cout<<totalm<<"\n";
                }
                else
                {
                   cout<<"Juice ";
                   cout<<totalj<<"\n";
                }
            }

}
return 0;
}
