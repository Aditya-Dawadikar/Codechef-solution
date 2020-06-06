#include<bits/stdc++.h>
using namespace std;
main(){
	int t,n,k,count,temp;
	cin>>t;
	while(t--){
		cin>>n>>k;
		count=0;
		for(int i=0;i<n;i++){
			cin>>temp;
			if(temp>k){
				count+=(temp-k);
			}
		}
		cout<<count<<"\n";
	}
	return 0;
}
