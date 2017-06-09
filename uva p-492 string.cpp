#include <iostream>
#include <sstream>
#include <string>
#include<ctype.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    //while(scanf("%s", &s)==1)
    getline(cin,s);
    istringstream iss(s);

    do
    {
        string sub;
        iss >> sub;
        if(sub[0]=='a' || sub[0]=='A' || sub[0]=='e' || sub[0]=='E'||sub[0]=='i' || sub[0]=='I'||sub[0]=='o' || sub[0]=='O'||sub[0]=='u' || sub[0]=='U')
        {
            int length=sub.length();
            if(sub[length-1]-'A'==-19)
            {
                for(int j=0;j<length-1;j++)
                {
                    cout <<sub[j];
                    if(j==length-2)
                       {
                         cout<<"ay.";
                       }
                }
            }
            else
               cout <<sub<<"ay ";

        }

        else
        {
            int length=sub.length();
            for(int i=1;i<length;i++)
            {
               cout <<sub[i];
                if(i==length-1)
                 cout <<sub[0]<<"ay ";
            }

        }
        //cout << "Substring: " << sub << std::endl;
    } while (iss);
    cout<<"\n";
    return 0;
}
