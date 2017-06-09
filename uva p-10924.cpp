#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1;
    while(cin>>str1)
    {
        int length=str1.length();
        int countt[length],chek1=0,chek2=0,temp=0;
      for(int i=0;i<length;i++)
        {
            int m=str1[i]-'a';
            if(m<0)
            {
              temp+=str1[i]-'A'+27;

            }
            else
               temp+=m+1;
        }

            for(int k=1;k<=temp;k++)
            {
            if(temp%k==0)
            {
              chek1++;
            }
            }
        if(temp==1)
        {
            cout<<"It is a prime word.\n";
        }
        else if(chek1==2)
        {
            cout<<"It is a prime word.\n";
        }
        else
            cout<<"It is not a prime word.\n";
    }
    return 0;
}

