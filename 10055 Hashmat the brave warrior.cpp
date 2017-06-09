#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int p,q;
    while(cin>>p>>q)
    {
        long long int R=abs(q-p);
        cout<<R<<"\n";
    }
    return 0;
}
