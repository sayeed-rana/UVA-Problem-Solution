#include <iostream>
#include <sstream>
#include <string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s,'\0');
    istringstream iss(s);

    do
    {
        string sub;
        iss >> sub;
        if(sub[0]=='a' || sub[0]=='A')
        {
          cout <<sub<<"ay ";
        }
        else if(sub[0]=='e' || sub[0]=='E')
        {
          cout <<sub<<"ay ";
        }
        else if(sub[0]=='i' || sub[0]=='I')
        {
          cout <<sub<<"ay ";
        }
        else if(sub[0]=='o' || sub[0]=='O')
        {
          cout <<sub<<"ay ";
        }
        else if(sub[0]=='u' || sub[0]=='U')
        {
          cout <<sub<<"ay ";
        }
        else
        {
            int length=sub.length();
            for(int i=1;i<length;i++)
            {
               cout <<sub[i];
            }
            cout <<sub[0]<<"ay ";
        }
        //cout << "Substring: " << sub << std::endl;
    } while (iss);
    cout<<"\n";
}
