#include<iostream>
using namespace std;
int isPrime(int n)//this function check a number prime or not?
{
    if(n<=1) return 0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return 0;
    }
           return 1;


}
int main()
{
    int prime;
    cin>>prime;
    cout<<isPrime(prime);
    return 0;
}
