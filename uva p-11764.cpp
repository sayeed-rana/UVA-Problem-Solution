#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    int m;
    for(m=1;m<=tc;m++)
    {
        int Num_wall;
        cin>>Num_wall;
        int numA[Num_wall];
        for(int j=0;j<Num_wall;j++)
        {
            cin>>numA[j];
        }
        int temp=numA[0],chek1=0;
        int small=numA[0],chek2=0;
        for(int i=1;i<Num_wall;i++)
        {
            if(numA[i]>temp)
            {
                temp=numA[i];
                chek1++;
            }
            else
            {
               temp=numA[i];
            }
            if(numA[i]<small)
            {
                small=numA[i];
                chek2++;
            }
            else
            {
                small=numA[i];
            }
        }
        cout<<"Case "<<m<<": "<<chek1<<" "<<chek2<<"\n";

    }
    return 0;
}

