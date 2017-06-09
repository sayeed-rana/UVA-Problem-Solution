 #include<iostream>
using namespace std;
    int main()
    {
        int n;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        else
        {
    int a[n],temp=0;
    for(int k=0;k<n;k++)
    {
    cin>>a[k];
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
   for(int j=0;j<n;j++)
   {
       if(j==n-1)
       {
         cout<<a[j];
       }
       else cout<<a[j]<<" ";

   }
   cout<<"\n";
        }
    }
   return 0;
   }
