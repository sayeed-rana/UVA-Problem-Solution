#include<bits/stdc++.h>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        int numI;
        cin>>numI;
        char ss[numI];
        int B=0,W=0,T=0,A=0;
        for(int j=0;j<numI;j++)
        {
            cin>>ss[j];
        }
        for(int j=0;j<numI;j++)
        {
            if(ss[j]=='B')
                B++;
            else if(ss[j]=='W')
                W++;
            else if(ss[j]=='T')
                T++;
            else
                A++;
        }
        cout<<"Case "<<i<<": ";
        if(B==numI)
            cout<<"BANGLAWASH\n";
        else if(W==numI)
            cout<<"WHITEWASH\n";
        else if(A==numI)
            cout<<"ABANDONED\n";
        else if(B==W || A+T==numI)
        {
            if(B==0 && W==0)
            {
              cout<<"DRAW "<<"0"<<" "<<T<<"\n";
            }
            else if(B!=0 && W!=0)
                cout<<"DRAW "<<B<<" "<<T<<"\n";
            else
               cout<<"DRAW "<<(numI-(A+T))/(B+W)<<" "<<T<<"\n";
        }
        else if(B>W)
        {
            if(W==0 && A!=0 && T==0)
                cout<<"BANGLAWASH\n";
            else
                cout<<"BANGLADESH "<<B<<" - "<<W<<"\n";
        }
        else
        {
            if(B==0 && A!=0 && T==0)
                cout<<"WHITEWASH\n";
            else
                cout<<"WWW "<<W<<" - "<<B<<"\n";
        }
    }
    return 0;
}
