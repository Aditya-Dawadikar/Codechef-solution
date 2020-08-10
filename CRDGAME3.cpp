#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,c,r;
    cin>>t;
    while(t--){
        cin>>c>>r;
        int cq,cr,rq,rr;
        cq=c/9;
        cr=c%9;
        rq=r/9;
        rr=r%9;
        if(cr){
            cq+=1;
        }
        if(rr){
            rq+=1;
        }
        if(cq<rq){
            cout<<0<<" "<<cq<<"\n";
        }else{
            cout<<1<<" "<<rq<<"\n";
        }
    }
    return 0;
}
