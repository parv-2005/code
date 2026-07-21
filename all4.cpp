#include <bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if(n<=1) return false;
    for(int i = 2;i<n/2;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
bool issum(int n){
    int sum = 0;
    while(n>0){
        sum = sum + n%10;
        n=n/10;
    }
    if(sum%2==0)return true;
    return false;
}

int main() {
	// your code goes here
	int s;
	int e;
	cin>>s;
	cin>>e;
	int count = 0;
	for(int i = s; i<e;i++){
	    if(isprime(i) && issum(i)){
	        cout<< i<<" ";
	        count++;
	    }
	   
	}
	cout<<endl;
	cout<<count;

}
