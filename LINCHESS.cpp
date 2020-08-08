#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,k;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    vector <int> p(n);
	    
	    for(int i=0;i<n;i++)
	    cin>>p[i];
	    
	    bool flag=false;
	    int min=INT_MAX,temp,a;
	    for(int i=0;i<n;i++){
	        if(k%p[i]==0){
	            flag=true;
	            temp=k/p[i]-1;
	            if(min>temp)
	            {min=temp;
	                a=p[i];
	            }
	        }
	    }
	    if(flag)
	    cout<<a<<"\n";
	    else
	    cout<<"-1"<<"\n";
	}
	return 0;
}