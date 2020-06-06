#include<bits/stdc++.h>
#include<cstring>
using namespace std;

main(){
	int t,count;
	string s;
	cin>>t;
	while(t--){
		cin>>s;
		count=0;
		for(int i=0;s[i]!='\0';i++){
			if(i==0){
				if(s[i]=='x'){
					if(s[i+1]=='y'){
						s[i]=s[i+1]='a';
						count++;	
					}	
				}else if(s[i]=='y'){
					if(s[i+1]=='x'){
						s[i]=s[i+1]='a';
						count++;
					}
				}
			}else if(s[i+1]=='\0'){
				if(s[i]=='x'){
					if(s[i-1]=='y'){
						s[i]=s[i-1]='a';
						count++;
					}
				}else if(s[i]=='y'){
					if(s[i-1]=='x'){
						s[i]=s[i-1]='a';
						count++;
					}
				}
			}else{
				if(s[i]=='x'){
					if(s[i+1]=='y'){
						s[i]=s[i+1]='a';
						count++;
					}else if(s[i-1]=='y'){
						s[i]=s[i-1]='a';
						count++;
					}
				}else if(s[i]=='y'){
					if(s[i+1]=='x'){
						s[i]=s[i+1]='a';
						count++;
					}else if(s[i-1]=='x'){
						s[i]=s[i-1]='a';
						count++;
					}
				}
			}		
		}
		cout<<count<<"\n";
	}
	return 0;
}
