#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int t;
	cin>> t;
	while(t--){
		int n; 
		cin>>n;
		int v[n];
		for(auto &i : v) {
			cin>>i;
		}
		ll mxi=0;
		ll mni=INT_MAX;
		ll count=0;
		for(ll i=0 ; i<n-1 ; i++){
			if(v[i+1]-v[i]>2){
				mxi=max(mxi,cnt+1);
				mni=min(mni,cnt+1);
				count=0;
			}
			else 
				count++;
		}
		mx=max(mxi,count+1);
		mn=min(mni,count+1);
		cout <<mni<<" "<<mxi<<"\n";
	}
	return 0;	
}
