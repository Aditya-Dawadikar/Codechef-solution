#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

main(){
	int t;
	int n,q,c;
	int sum,variable,query;
	string s;
	char alpha;
	int a[26];
	cin>>t;
	while(t--){
		cin>>n>>q>>s;
		for(int i=0;i<26;i++){
			a[i]=0;
		}
		
		for(int i=0;i<s.size();i++){
			alpha=s[i];
			a[alpha-97]+=1;
		}

		for(int i=0;i<q;i++){
			cin>>query;
			sum=0;
			for(int j=0;j<26;j++){
				if(a[j]-query>=0 && a[j]>0){
					sum+=(a[j]-query);
					//cout<<j<<"\ta[j]:"<<a[j]<<"\ttemp[j]"<<a[j]-query<<endl;
				}
			}
			//cout<<"pending queue:"<<sum<<endl;
			cout<<sum<<"\n";
		}
	}
	
	return 0;
}
