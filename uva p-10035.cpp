#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    unsigned int numA,numB,chek1[10],chek2[10];
    while(cin>>numA>>numB)
    {
        int i=0,j=0,m=0,n=0,countt=0;
        if(numA==0 && numB==0)
        {
           //cout<<"gg";
           break;
        }
        else
        {
        do
        {
            chek1[i]=numA%10;
            //cout<<chek1[i]<<"\n";
            i++;
            m=i;
        }while(numA/=10);
        do
        {
            chek2[j]=numB%10;
            //cout<<chek1[i]<<"\n";
            j++;
            n=j;
        }while(numB/=10);
        if(m>n)
        {
           for(int h=0;h<m;h++)
        {
            if(h>=n)
            {
                chek2[h]=0;
            }

            int carry=chek1[h]+chek2[h];
            if(carry>=10)
            {
                countt++;
            }
        }
        }
        else if(n>m)
        {
        for(int h=0;h<n;h++)
        {
            if(h>=m)
            {
                chek1[h]=0;
            }
            int carry=chek1[h]+chek2[h];
            if(carry>=10)
            {
                countt++;
            }
        }
        }
        else
        {
          for(int h=0;h<n;h++)
        {
            if(h>=m)
            {
                chek1[h]=0;
            }
            int carry=chek1[h]+chek2[h];
            if(carry>=10)
            {
                countt++;
            }
        }
        }
        if(countt==0)
        {
          cout<<"No carry operation.\n";
        }
        else if(countt==1)
        {
            cout<<"1 carry operation.\n";
        }
        else
            cout<<countt<<" carry operations.\n";
        }
    }
    return 0;
}
