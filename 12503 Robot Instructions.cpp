#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    cin.ignore();
    while(tc--)
    {
        int numI;
        cin>>numI;
        cin.ignore();
        int num=0,arr[numI],k=1,arr2[numI],ff=numI;
        while(numI--)
        {
            string str1;
            //scanf("%[^\n]s",&str1);
            getline(cin,str1,'\n');
            if(str1[0]=='L')
            {
                num=-1;
                //arr[k]=-1;
            }
            else if(str1[0]=='R')
            {
                num=1;
                //arr[k]=1;
            }
            else
            {
                int length=str1.length();
                if(length==10)
                {
                    int ss=(str1[8]-'0')*10+(str1[9]-'0');
                    num=arr2[ss];
                }
                else
                    {
                        int rr=(str1[8]-'0');
                        num=arr2[rr];
                    }
            }

            arr2[k]=num;
            k++;
            str1='0';
        }
        int tt=0;
        for(int i=1;i<=ff;i++)
           {
               tt=tt+arr2[i];
           }
        cout<<tt<<"\n";
    }
    return 0;
}
