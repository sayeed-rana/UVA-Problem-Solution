#include<iostream>
using namespace std;
long long int total=0;
int main()
{
    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++)
    {
        string str1,str2;
        long long int num=0;
        cin>>str1;
        if(str1[0]=='d')
        {   cin>>num;
            total+=num;
            }
        else
           cout<<total<<"\n";
    }
    return 0;
}
