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
    while(tc--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if((a+b)>c && (b+c)>a && (a+c)>b)
        {
            cout<<"OK\n";
        }
        else
            cout<<"Wrong!!\n";
    }
    return 0;
}
