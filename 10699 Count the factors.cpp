/*
S.M. Sayeed
CSE'12 JUST
*/
#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int main()
{
    int N;
    while(cin>>N)
    {
       //int Num[5000]={0};
       if(N==0)
       {
           break;
       }
       int chek1=0;

       for(int i=2;i<=N;i++)
       {
           if(N%i==0)
           {
               int j=0;
               for(int m=1;m<=i;m++)
               {
                   if(i%m==0)
                   {
                     j++;
                   }
               }
               if(j==2)
               {
                   chek1++;
               }

           }
       }
      cout<<N<<" : "<<chek1<<"\n";
    }
    return 0;
}
