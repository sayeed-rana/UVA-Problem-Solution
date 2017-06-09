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
   for(int i=1;i<=tc;i++)
   {
       int N,K,P,temp=0;
       cin>>N>>K>>P;
       int chek=K;
       if(N>P)
       {
         for(int j=1;j<=P;j++)
          {
          chek++;
          }
       }
       else
       {
           int temp=P%N;
           for(int j=1;j<=temp;j++)
          {
          chek++;
          }
       }

       if(chek<=N)
       {
         cout<<"Case "<<i<<": ";
         cout<<chek<<"\n";
       }
       else
       {
        int total=chek-N;
       cout<<"Case "<<i<<": ";
       cout<<total<<"\n";
        }
   }
   return 0;
}
