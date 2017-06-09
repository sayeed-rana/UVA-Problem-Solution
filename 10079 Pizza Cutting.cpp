#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int n;
    while(cin>>n)
    {
        if(n<0)
        {
            break;
        }
     long long int R=((n*n)+n+2)/2;
        cout<<R<<"\n";
    }
    return 0;
}
