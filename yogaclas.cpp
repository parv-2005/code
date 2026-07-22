#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,X,Y;
	cin>>n>>X>>Y;
	if(n%2==0){
	    if((n/2)*Y>n*X){
	        cout<<(n/2)*Y<<endl;
	    }
	    else{
	        cout<<n*X<<endl;
	    }
	}
	else{
	    if((((n/2)*Y)+X) >n*X){
	        cout<<(((n/2)*Y)+X)<<endl;
	    }
	    else{
	        cout<<n*X<<endl;
	    }
	    
	}

}
