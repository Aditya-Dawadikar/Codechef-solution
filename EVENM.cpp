#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		if(n%2==0){
			int cnt=0;
			for(int i=0;i<(n/2);i++){
				int backup;
				for(int j=0;j<n;j++){
					cout<<++cnt<<" ";
				}cout<<"\n";
				backup=cnt;
				cnt+=n;
				for(int j=0;j<n;j++){
					cout<<cnt--<<" ";
				}cout<<"\n";
				cnt=backup+n;
			}
		}else{
			int cnt=0;
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					cout<<++cnt<<" ";
				}cout<<"\n";
			}
		}
	}
	return 0;
}
