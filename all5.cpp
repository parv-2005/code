#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin,s);
	string p;
	getline(cin,p);
	string ans;
	for(int i =0; i<s.size();i++){
	    if(s[i]==p[i]){
	        ans.push_back('G');
	    }
	    else{
	        ans.push_back('B');
	    }
	}
	cout<< ans ;
}
