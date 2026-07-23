#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int totrange = (b-a+1)+(d-c+1);
	int common = min(d,b)-max(a,c)+1;
	if(common<0) common = 0;
	cout<<totrange-common<<endl;

}
