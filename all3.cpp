#include <bits/stdc++.h>
using namespace std;
bool fun(int n){
	        int sum = 0;
	        int num = n;
	        while(num>0){
	        int digit = num%10;
	        sum = sum + digit;
	        num = num/10;
	            
	        }
	    if(sum%2==0) return true;
	    return false;
	    }

int main() {
	int s;
	int e;
	cin>>s;
	cin>>e;
	int count = 0;
	for(int i = s; i<=e;i++){
	    if(i%3==0 && fun(i) ){
	        count++;
	}
	}
	cout<<count;

}
