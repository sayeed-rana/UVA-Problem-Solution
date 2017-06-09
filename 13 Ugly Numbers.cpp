#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j=0,k;
    i=1;
    while(j!=11)
    {
        if(i==1 || i%2==0 || i%3==0 || i%5==0)
        {
            k=i;
            j++;
        }
        i++;
    }
    cout<<"The 1500'th ugly number is <"<<k<<">.";
    return 0;
}
