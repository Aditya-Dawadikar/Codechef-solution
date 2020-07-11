#include<iostream>
#include<bits/stdc++.h> 
#include<vector>
#include<map> 
#include<algorithm>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long int n,x;
        cin>>n;
        int flag=0;
        vector<long long int> a,b,c,d,f;
        vector<long long int> v2(n + n),v3(n+n);
        vector<long long int>::iterator it,ls,ls1,it1;
        map<long long int,long long int> m,mp; 
        set<long long int> s;
        
        for(int i=0;i<n;i++){
            cin>>x;
            a.push_back(x);
            s.insert(x);
            m[x]++;
            
        }
        for(int i=0;i<n;i++){
           cin>>x;
            b.push_back(x);
              s.insert(x);
            m[x]++;
        }
        
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        long long int o,p;
        long long int minele=min(a[0],b[0]);
        
        for(auto &k:m){
           if(k.second%2!=0){
               flag=1;
               break;
           }
       }
        if(a==b){
            cout<<0<<endl;
        }
        else if(flag==1){
            cout<<-1<<endl;
        }
        else{
            ls = std::set_difference(a.begin(), a.end(), b.begin(), b.end(), v2.begin());
            for (it = v2.begin(); it < ls; ++it){
                 c.push_back(*it);
            }
              ls1 = std::set_difference(b.begin(), b.end(), a.begin(), a.end(), v3.begin());
            for (it1 = v3.begin(); it1 < ls1; ++it1) {
                 c.push_back(*it1);
             }
             for(int i=0;i<c.size();i++){
                 mp[c[i]]++;
             }
             
             for(auto &k:mp){
                 for(int i=0;i<(k.second)/2;i++)
                 {
                     f.push_back(k.first);
                 }
             }
             
             
            long long int min_cost=0;
            
            for(int i=0;i<f.size()/2;i++){
                 if(f[i]>= (minele*2)){
                     min_cost=min_cost+(minele*2);
                 }
                 else{
                     min_cost=min_cost+f[i];
                 }
             }
             cout<<min_cost<<endl;
        }
    }
	return 0;
}