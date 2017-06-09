#include<bits/stdc++.h>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    int tc=1;
    string str1;
    while(cin>>str1)
    {
        if(str1[0]=='H')
            {
                cout<<"Case "<<tc<<": ";
                cout<<"Hajj-e-Akbar\n";
            }
        else if(str1[0]=='U')
        {
           cout<<"Case "<<tc<<": ";
           cout<<"Hajj-e-Asghar\n";
        }
        else
            break;

        tc++;
    }
    return 0;
}
