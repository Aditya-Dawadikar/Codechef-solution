#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,p,h;
	cin>>t;
	while(t--){
	    cin>>h>>p;
	    int flag=0;
	    while(h>=0 && p>=0){
	        h=h-p;
	        p=floor(p/2);
	        if((p==0 && h>0)){
	            flag=0;
	            break;
	        }else if(p>=0 && h<=0){
	            flag=1;
	            break;
	        }
	    }
	    
	    cout<<flag<<"\n";
	}
	return 0;
}