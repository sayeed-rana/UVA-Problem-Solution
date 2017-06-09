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
      char s[201]={0};
      char r[201]={0};
      int total[201]={0},sum1[201]={0},sum2[201]={0};
      scanf("%s %s",&s,&r);
      int length1=strlen(s);
      int length2=strlen(r);
      for(int l=0;l<length1;l++)
      {
          sum1[l]=s[l]-'0';
      }
      for(int l=0;l<length2;l++)
      {
          sum2[l]=r[l]-'0';
      }
      if(length1>=length2)
        {
          for(int j=0;j<length1;j++)
          {
             int f=sum2[j]+sum1[j];
             if(f>=10)
             {
                 total[j]=f%10;
                 sum2[j+1]++;
             }
             else
                total[j]=f;
          }

        }
        else
        {
            for(int j=0;j<length2;j++)
          {
            total[j]=sum2[j]+sum1[j];
          }
        }
        if(length1>=length2)
        {
             for(int m=0;m<length1;m++)
            {
                cout<<total[m];
            }
            cout<<"\n";
        }
        else
        {
            for(int m=0;m<length2;m++)
            {
                cout<<total[m];
            }
            cout<<"\n";
        }

    }
    return 0;

}
