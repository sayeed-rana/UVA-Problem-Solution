/*
S.M. Sayeed
CSE'12 JUST
*/
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++)
    {
        int c=0,f=0;
        float val=0;
        cin>>c>>f;
        val=c+f/1.8;
        float nearest = roundf(val * 100) / 100;
        cout<<"Case "<<i+1<<": ";
        printf("%.2f\n",nearest);
    }
    return 0;
}
