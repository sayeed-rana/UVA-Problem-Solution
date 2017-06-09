#include<bits/stdc++.h>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
      char s[20]={0};
      char r[20]={0};
      int total[20]={0},sum1[20]={0},sum2[20]={0},ss=0;
      scanf("%s",&s);
      int length1=strlen(s);
      int length2=strlen(r);
       int chek1=0;
      for(int l=0;l<length1;l++)
      {
          sum1[l]=s[l]-'0';
      }
      for(int l=length1-1;l>=0;l--)
      {
          sum2[l]=sum1[l];
      }
          for(int j=0;j<length1;j++)
          {
             int f=sum2[j]+sum1[j];
             if(f>=10)
             {
                 total[j]=f%10; sum2[j+1]++;
                 if(j==length1-1){
                    total[j+1]=1;
                    length1+=1;
                 }
             }
             else
                total[j]=f;
          }
          int l=0;

             for(int m=0;m<lenC;m++)
            {
                if(total[m]>=1)
                {
                   cout<<total[m];
                   l++;
                }
                else if(l>=1)
                {
                    cout<<total[m];
                }

            }
            cout<<"\n";
            }

    return 0;

}
