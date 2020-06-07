#include <bits/stdc++.h>
using namespace std;

int main() {  
	int t; 
	cin>> t;
	while(t--){
		long long int n;
		cin>>n;
		if(n%2==0){
		    //even
			while(n%2==0){
			    n=n/2;
			}
			cout<<n/2<<"\n";
		}else{
			//odd
			cout<<(n/2)<<"\n";
		}
	}
	
}
