#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int N;
    while(cin>>N)
    {
        //int total=0;
        if(N==0)
        {
            break;
        }
        else if(N<=100)
        {
            cout<<"f91("<<N<<") = "<<"91\n";
        }
        else
        {
          cout<<"f91("<<N<<") = "<<N-10<<"\n";
        }
    }
    return 0;
}
