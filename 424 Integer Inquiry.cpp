
#include<stdio.h>
#include<string.h>
int main()
{
    char s[201]={0};
    int sum[201]={0},i,j;
    while(gets(s))
    {
        if(!strcmp(s,"0")) break;
        int length=strlen(s);
        for(i=0,j=length-1;i<length;i++,j--)
        {
            sum[i]+=s[j]-'0';
        }
    }
        for(i=0;i<200;i++)
        {
            if(sum[i]>=10)
            {
                sum[i+1]+=sum[i]/10;
                sum[i]%=10;
            }
        }
        i=200;
        while(sum[i]==0 && i>=0) i--;

        if(i == -1)	printf("0");
	    for(; i >= 0; i--) {
		printf("%d", sum[i]);
	}
	puts("");
    return 0;
}
