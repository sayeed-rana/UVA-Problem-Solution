/*
S.M. Sayeed
CSE'12 JUST
*/
#include<bits/stdc++.h>
 #include <sstream>
 #include<vector>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    cin.ignore();
    for(int i=1;i<=tc;i++)
    {
        int n,P,Q;
        cin>>n>>P>>Q;
        cin.ignore();
        int temp=0,chek=0;
        vector<int>arr2(50);
        vector<int>numA(50);
        string numbers_str,str2;
       getline(cin, numbers_str, '\n' );
       int number,k=1;
       for (istringstream numbers_iss( numbers_str );
          numbers_iss >> number; ) {
        numA[k]=number;
        temp+=numA[k];
        arr2[k]=temp;
        k++;
    }

        for(int j=1;j<k;j++)
        {
            if(j<=P && arr2[j]<=Q)
            {
                chek++;
            }

        }
        cout<<"Case "<<i<<": ";
        cout<<chek<<"\n";
    }
    return 0;
}
