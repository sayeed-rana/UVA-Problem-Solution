/*
S.M. Sayeed
CSE'12 JUST
*/
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int palindrome(string str3)
{
   int length=str3.length();
    int str2[length],chek1=0,countt[length],chek2=0,chek3=0;

        for(int i=0;i<length;i++)
        {
            int m=str3[i]-'A';
            countt[i]=m;
        }
        int k=0;
        for(int j=length-1;j>=0;j--)
        {
            str2[k]=countt[j];
            k++;
        }
        for(int m=0;m<length;m++)
        {
            if(str2[m]==countt[m])
            {
              chek1++;
              if(str3[m]=='B' || str3[m]=='C' || str3[m]=='D' || str3[m]=='E' || str3[m]=='F' || str3[m]=='G' || str3[m]=='J' || str3[m]=='K' || str3[m]=='L' ||
                 str3[m]=='N' || str3[m]=='P' || str3[m]=='Q' || str3[m]=='R' || str3[m]=='S' || str3[m]=='Z' || str3[m]=='2' || str3[m]=='3' ||
                 str3[m]=='4' || str3[m]=='5' || str3[m]=='6' || str3[m]=='7' || str3[m]=='9')
               {
                  chek2++;
               }
            }
            else
            {
               if(str3[m]=='B' || str3[m]=='C' || str3[m]=='D' || str3[m]=='F' || str3[m]=='G' || str3[m]=='K' ||
                 str3[m]=='N' || str3[m]=='P' || str3[m]=='Q' || str3[m]=='R' ||
                 str3[m]=='4'  || str3[m]=='6' || str3[m]=='7' || str3[m]=='9')
              {

                  chek3++;
              }
            }
        }
        for(int m=0;m<length;m++)
        {

        }
        if(chek1==length && chek2==0)
        {
            return 1;

        }
        else if(chek1==length && chek2>0)
        {
           return 2;

        }
        else if(chek3==0)
        {
            return 3;

        }
        else
            return 4;

}

int main()
{
    string str1;
    while(cin>>str1)
    {

        int result=palindrome(str1);
        if(result==1)
        {
            cout<<str1<<" -- is a mirrored palindrome.\n\n";
        }
        else if(result==2)
        {
            cout<<str1<<" -- is a regular palindrome.\n\n";
        }
        else if(result==3)
           cout<<str1<<" -- is a mirrored string.\n\n";

        else
            cout<<str1<<" -- is not a palindrome.\n\n";
    }
    return 0;
}

 if(str3[m]=='B' || str3[m]=='C' || str3[m]=='D' || str3[m]=='F' || str3[m]=='G' || str3[m]=='K' ||
                 str3[m]=='N' || str3[m]=='P' || str3[m]=='Q' || str3[m]=='R' ||
                 str3[m]=='4'  || str3[m]=='6' || str3[m]=='7' || str3[m]=='9')
