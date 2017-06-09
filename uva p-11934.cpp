/*
S.M. Sayeed
CSE'12 JUST
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,l;
    while(cin>>a>>b>>c>>d>>l)
    {
        if(a==0 && b==0 && c==0 && d==0 && l==0)
        {
            break;
        }
        else
        {
           int chek1=0;
        for(int i=0;i<=l;i++)
        {
            int total=a*i*i+b*i+c;
            if(total%d==0)
            {
              chek1++;
            }
        }
        cout<<chek1<<"\n";
        }
    }
    return 0;
}
