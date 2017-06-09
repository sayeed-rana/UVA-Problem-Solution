#include<iostream>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,minute[20]={0};
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>minute[i];
        }
        int temp=minute[0];
        int small=minute[0];
        for(int i=0;i<n;i++)
        {
            if(minute[i]>=temp)
            {
                temp=minute[i];
            }
            if(minute[i]<=small)
            {
                small=minute[i];
            }
        }
        int result=(temp-small)*2;
        cout<<result<<"\n";

    }
    return 0;
}
