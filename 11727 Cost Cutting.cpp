#include<iostream>
using namespace std;
int main()
{
    int tc,j=1;
    cin>>tc;
    while(tc--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        cout<<"Case "<<j<<": ";
        if(a==b==c)
            cout<<a<<"\n";
         else if((a>b && a<c) || (a>c && a<b))
            cout<<a<<"\n";
         else if((b>a && b<c)||(b>c && b<a))
            cout<<b<<"\n";
         else
            cout<<c<<"\n";
        j++;
    }
    return 0;
}
