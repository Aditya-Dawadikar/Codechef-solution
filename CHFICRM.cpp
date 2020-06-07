#include <bits/stdc++.h>
using namespace std;

int main() 
{
       int T;
       cin>>T;
       while(T--)
       {
            int n;
            cin>>n;
            int a[n];
            for(int i=0; i<n; i++)
            cin>>a[i];
            int c5=0,c10=0;
            int flag= 0;
            for(int i=0; i<n; i++)
            {
                if(a[i]==5)
                {
                    c5++;
                }
                else if(a[i]==10)
                {
                    c5--;
                    c10++;
                }
                else
                {
                    if(c10>0) 
                    c10--;
                    else c5-=2;
                }
                if(c5<0||c10<0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            cout<<"NO\n";
            else 
            cout<<"YES\n";    
                
       }
}
