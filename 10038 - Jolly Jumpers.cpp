#include<bits/stdc++.h>
#include<cmath>
#include<sstream>
using namespace std;
int main()
{
    string numbers_str;
    while(getline(cin, numbers_str, '\n' ))
    {
    int number,k=0,numA[3005],r=0,chek=0;

    for (istringstream numbers_iss( numbers_str );
          numbers_iss >> number; ) {
        numA[k]=number;
        k++;
        r=k;
    }
    if(numA[0]==0)
    {
        break;
    }

         else if(numA[0]==1)
        {
            cout<<"Jolly\n";
        }

        else
        {
        int arr2[3005]={0},small=0,temp=0;

        for(int i=1;i<r-1;i++)
        {
        arr2[i]=abs(numA[i]-numA[i+1]);
        chek++;
        }
for(int i=1;i<chek;i++)
 {
 for(int j=1;j<chek;j++)
 {
 if(arr2[j]>arr2[j+1])
 {
 temp=arr2[j];
 arr2[j]=arr2[j+1];
 arr2[j+1]=temp;
 }
 }
 }
        for(int i=1;i<chek;i++)
        {
            if(arr2[i]-arr2[i+1]!=-1)
            {
              small++;
            }
        }
        if(small==0 && arr2[1]==1)
            cout<<"Jolly\n";
        else
            cout<<"Not jolly\n";
        }

    }
    return 0;
}
