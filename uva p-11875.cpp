/*
S.M. Sayeed
CSE'12 JUST
*/
#include<bits/stdc++.h>
#include<cstdio>
#include <sstream>
#include<vector>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    cin.ignore();
    for(int m=1;m<=tc;m++)
    {
        vector<int>numA(50);
        string numbers_str,str2;
        int number,k=0,temp=0;
        float F=0;
        getline(cin, numbers_str, '\n' );
        for (istringstream numbers_iss( numbers_str );
            numbers_iss >> number; ) {
            numA[k]=number;
            k++;
          }
          F=(k-1)/2;
          cout<<"Case "<<m<<": ";
          printf("%d\n",numA[F+1]);

    }
    return 0;
}
