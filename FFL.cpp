#include<iostream>
#include<bits/stdc++.h>
using namespace std;

main(){
	int t,n,a,b,u;
	vector<int> F,D,P;
	cin>>t;
	while(t--){
		cin>>n>>u;
		for(int i=0;i<n;i++){
			cin>>a;
			P.push_back(a);
		}
		for(int i=0;i<n;i++){
			cin>>b;
			if(b==0){
				D.push_back(P[i]);
			}else{
				F.push_back(P[i]);
			}
		}
		
		sort(D.begin(),D.end());
		sort(F.begin(),F.end());
		
		u=100-u;
		int flag=0;
		for(int i=0;i<F.size();i++){
			if(F[i]>u){
				break;
			}else{
				int x= u-F[i];
				int lower,upper,mid;
				lower=0;
				upper=D.size()-1;
				
				while(lower<=upper){
					mid= (lower + (upper-lower))/2;
					if(D[mid]<=x){
						flag=1;
						break;
					}else{
						upper=mid-1;
					}
				}
				if(flag==1){
					break;
				}
			}
			
		}
		if(flag==1){
			cout<<"yes\n";
		}else{
			cout<<"no\n";
		}
		
		P.clear();
		F.clear();
		D.clear();
	}
	return 0;
}
