#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[10];
	for(int i = 0;i<10;i++){
	    cin>>arr[i];
	}
	int t1= 0;
	int t2 = 0;
	for(int i = 0;i<10;i++){
	    if(i%2==0){
	        t1 = t1+ arr[i];
	    }
	    else {t2 = t2 + arr[i];}
	}
	if(t1>t2) cout<<1;
	else if (t1<t2) cout<<2;
	else cout<<0;
	
	
}
