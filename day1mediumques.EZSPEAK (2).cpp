#include <bits/stdc++.h>
using namespace std;

bool isconsonant(char c){
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
        return false;
    }
    else{
        return true;
    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int count=0,mxcount=0;
	    for(int i=0;i<n;i++){
	        if(isconsonant(s[i])){
	            count++;
	        }
	        else{
	            mxcount=max(mxcount,count);
	            count=0;
	        }
	    }
	    mxcount=max(mxcount,count);
	    if(mxcount>=4){
	        cout<<"NO"<<endl;
	    }
	    else{
	        cout<<"YES"<<endl;
	    }
	}
     return 0;
}
