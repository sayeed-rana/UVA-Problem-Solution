#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    cin.ignore();
    while(tc--)
    {
        char s[100];
        int num[100]={0};
        gets(s);
        int length=strlen(s);
        for(int i=0;i<length;i++)
        {
            num[i]=s[i]-'0';
        }
        if((num[0]==1 || num[0] == 4 ||(num[0]==7 && num[1]==8)) && length==2)
            cout<<"+\n";
        else if((num[0]==1 || num[0] == 4 ||(num[0]==7 && num[1]==8)) && length<=4)
            cout<<"-\n";
        else if(num[1]==1 || num[1] == 4 ||(num[1]==7 && num[2]==8))
            cout<<"*\n";
        else
            cout<<"?\n";
    }
    return 0;
}
