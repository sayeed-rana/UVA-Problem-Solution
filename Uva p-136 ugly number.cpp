#include<iostream>
using namespace std;
int main ()
{
    int i=2,j,chek=1;
    while(chek!=10)
    {

    if(i%2==0 || i%3==0 || i%5==0)
        {
            chek++;
            cout<<i<<" ";
        }
        i++;
    }
    return 0;
}
