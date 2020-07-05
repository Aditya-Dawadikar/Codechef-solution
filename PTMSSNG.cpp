#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    long long int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        
        long long int len= (4*n)-1;
        vector<int> px,py;
        int a;
        set<int> sx,sy;
        
        for(int i=0;i<len;i++){
            cin>>a;
            px.push_back(a);
            sx.insert(a);
            cin>>a;
            py.push_back(a);
            sy.insert(a);
        }    
        
        set<int>::iterator itr;
        long long int rx,ry;
        
        for(itr=sx.begin();itr!=sx.end();itr++){
            int cx=count(px.begin(),px.end(),*itr);
            if(cx%2!=0){
                rx=*itr;                
                break;
            }
        }
        for(itr=sy.begin();itr!=sy.end();itr++){
            int cy=count(py.begin(),py.end(),*itr);
            if(cy%2!=0){
                ry=*itr;
                break;
            }
        }
        
        cout<<rx<<" "<<ry<<"\n";
        
        px.clear();
        py.clear();
        sx.clear();
        sy.clear();
    }
    
    return 0;
}