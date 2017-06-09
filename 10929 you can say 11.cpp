#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[2001];
    while(scanf("%s",s)==1)
    {
        int temp=0,l = strlen(s);
        if(strcmp(s,"0")==0)
        {
           break;
        }
        printf("%s ", s);
        for(int i=0;i<l;i++)
        {
            if(i%2==0)
            {
              temp+=s[i]-'0';
            }
            else
                temp-=s[i]-'0';

        }
        if(temp%11==0)
        {
            puts("is a multiple of 11.");
        }
        else
			puts("is not a multiple of 11.");
    }
    return 0;
}
