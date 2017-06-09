/*
S.M. Sayeed
CSE'12 JUST

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    for(int k=1;k<=tc;k++)
    {
        string str;
        cin>>str;
        int length=str.length();
        int countt[length],chek3=0;
        cout<<"Case "<<k<<": ";
        for(int i=0;i<length;i++)
        {
            int m=str[i]-'a';
            if(m==-49 || m==-48 || m==-47 || m==-46 || m==-45 || m==-44 || m==-43 || m==-42 || m==-41 || m==-40)
            {
                countt[i]=abs(m)+12;
            }
            else
            {
            if(m<0)
            {
                countt[i]=26+str[i]-'A';
            }
            else countt[i]=str[i]-'a';
            }

        }
        int g=0;
        for(int i=0;i<62;i++)
        {
            int chek=0,chek2=0;
            for(int j=0;j<length;j++)
            {
                if(i==countt[j])
                {
                  chek++;
                }
            }
            if(chek>0)
            {
                for(int l=1;l<=chek;l++)
                {
                    if(chek%l==0)
                    {
                        chek2++;
                    }
                }
                if(chek2==2)
                {
                    cout<<str[g];
                    chek3++;
                }
              g++;
            }

        }
        if(chek3==0)
        {
            cout<<"empty";
        }
        cout<<"\n";

    }
    return 0;
}*/
#include<stdio.h>
int main() {
	int prime[2002] = {0};
	int i, j, C = 0, t;
	prime[0] = prime[1] = 1;
	for(i = 2; i < 2002; i++)
		if(prime[i] == 0) {
			for(j = 2; i*j < 2002; j++)
				prime[i*j] = 1;
		}
	char s[2002];
	scanf("%d", &t);
	while(t--) {
		scanf("%s", s);
		int asci[128] = {0};
		for(i = 0; s[i]; i++)
			asci[s[i]]++;
		printf("Case %d: ", ++C);
		for(i = 0, j = 0; i < 128; i++)
			if(prime[asci[i]] == 0)
				printf("%c", i), j++;
		if(j == 0)	printf("empty");
		puts("");
	}
    return 0;
}

