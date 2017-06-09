#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    char str1[999];
    while(gets(str1))
    {
        int length=strlen(str1);
        char str2[999]={0},str3[999]={0},str4[999]={0};
        int str23[999]={0},b=0,str24[999]={0};
        if(str1[0]-'0'<10)
        {
            int k=0,j=length-2;
            for(int i=length-1;i>=0;i=i-2)
            {
                str2[i]=10*(str1[i]-'0');
                str4[j]=str1[j]-'0';
                 str3[k]=str4[j]+str2[i];
                  k++;
                  j=j-2;
            }

            for(int l=0;l<k;l++)
            {
                cout<<str3[l];
            }
            cout<<"\n";
        }
        else
        {
            for(int i=0;i<length;i++)
            {
               if(str1[i]-'a'<0)
               {
                   if(str1[i]-'A'<0)
                   {
                       if(str1[i]-'A'==-33)
                       {
                         str23[i]=32;
                         str24[i]=(str23[i]%10)*10+(str23[i]/10);
                       }
                       else{
                         str23[i]=33+str1[i]-'!';
                         int m=str23[i]%10;
                         if(m==0)
                         {
                             str24[i-1]+=100;
                             str24[i]=(str23[i]/10);
                         }
                         else
                          str24[i]=(str23[i]%10)*10+(str23[i]/10);
                       }

                   }

                   else
                   {
                     str23[i]=str1[i]-'A'+65;
                     cout<<"RR";
                     int m=str23[i]%10;
                         if(m==0)
                         {
                             str24[i-1]+=100;
                             str24[i]=(str23[i]/10);
                         }
                         else
                          str24[i]=(str23[i]%10)*10+(str23[i]/10);
                   }

               }
               else
               {
                   str23[i]=str1[i]-'a'+97;
                   int m=str23[i]%10;
                         if(m==0)
                         {
                             str24[i-1]+=100;
                             str24[i]=(str23[i]/10);
                         }
                         else
                          str24[i]=(str23[i]%10)*10+(str23[i]/10);
               }

            b++;
            }
            for(int l=b-1;l>=0;l--)
            {
                printf("%d",str24[l]);
            }
            cout<<"\n";
        }
    }
    return 0;
}
