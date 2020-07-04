#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long int cur,prev,sum,x;
        cin>>prev;
        sum=0;
        for(int i=1;i<n;i++){
            cin>>cur;
            //cout<<"(prev,cur):"<<"("<<prev<<","<<cur<<")\n";
            x=abs(prev-cur);
            prev=cur;
            if(x>1){
                x-=1;
                sum+=x;
            }
            //cout<<"x:"<<x<<"\n";
        }
        cout<<sum<<"\n";
    }
    return 0;
}
