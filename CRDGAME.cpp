#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long int p1,p2;
        long long int n1,n2;
        long long int mod,s1,s2;
        p1=p2=s1=s2=0;
        for(int i=0;i<n;i++){
            cin>>n1>>n2;
            //cout<<"(n1,n2):"<<n1<<" "<<n2<<"\n";
            p1=p2=0;
            while(n1>0){
                mod=n1%10;
                n1=n1/10;
                p1+=mod;
            }while(n2>0){
                mod=n2%10;
                n2=n2/10;
                p2+=mod;
            }
            //cout<<"(p1,p2):"<<p1<<" "<<p2<<"\n";
            if(p1>p2){
                s1+=1;
            }else if(p1<p2){
                s2+=1;
            }else{
                s1+=1;
                s2+=1;
            }
            //cout<<"(s1,s2):"<<s1<<" "<<s2<<"\n";
        }
        if(s1>s2){
            cout<<0<<" "<<s1<<"\n";
        }else if(s1<s2){
            cout<<1<<" "<<s2<<"\n";
        }else{
            cout<<2<<" "<<s1<<"\n";
        }
    }
    return 0;
}
