#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    while(a<b){
        a++;
        if(a==b) cout<<"yes";
        else {a=a+2;
            if(a==b)cout<< "yes";
        }
        
    }
    if(a>b) cout<<"No";
    
    
}
