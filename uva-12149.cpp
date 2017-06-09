/*
S.M. Sayeed
CSE'12 JUST
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //int tc;
    //cin>>tc;
    int N=0,PerfectSq=0;
    while(cin>>N)
    {
        if(N==0)
        {
            break;
        }
        else
        {
          PerfectSq=(N*(N+1)*(2*N+1))/6;
           cout<<PerfectSq<<"\n";
        }
    }
    return 0;
}
