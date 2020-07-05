#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getodd(long long int ar[], long long int ar_size) 
{ 
    int res = 0;  
    for (int i = 0; i < ar_size; i++)      
        res = res ^ ar[i]; 
      
    return res; 
} 

int main()
{
    long long int *x,*y;
    long long int t,n,len,a,b;
    cin>>t;
    while(t--){
        cin>>n;
        len=n*4-1;
        x= new long long int[len];
        y= new long long int[len];
        for(int i=0;i<len;i++){
            cin>>x[i]>>y[i];
        }
        
        a=getodd(x,len);
        b=getodd(y,len);
        cout<<a<<" "<<b<<"\n";
    }
    return 0;
}
