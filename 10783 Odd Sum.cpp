#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        int a,b,total=0;
        cin>>a>>b;
        if(a%2==1 && b%2==1)
        {
            for(int j=a;j<=b;j=j+2)
            {
                total+=j;
            }
        }
        else if(a%2==1 && b%2==0)
        {
            for(int j=a;j<b;j=j+2)
            {
                total+=j;
            }
        }
        else if(a%2==0 && b%2==1)
        {
            for(int j=a+1;j<=b;j=j+2)
            {
                total+=j;
            }
        }
        else
        {
            for(int j=a+1;j<b;j=j+2)
            {
                total+=j;
            }
        }
        cout<<"Case "<<i<<": ";
        cout<<total<<"\n";
    }
    return 0;
}
