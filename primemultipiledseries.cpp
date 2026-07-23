#include <bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if(n<2) return false;
    for(int i = 2;i<=n/2;i++){
        if(n%i==0) return false;
    }
    return true;
}

int main() {
    int n;
    cin>>n;
    int print = 0;
    int num = 2;
    while(print<n){
        while(!isprime(num)) num++;
        int p1 = num;
        num++;
        cout<<p1<<" ";
        print++;
        if(print==n)break;
        // second 
        while(!isprime(num)) num++;
        int p2 = num;
        num++;
        cout<<p2<<" ";
        print++;
        if(print==n)break;
        cout<<p1*p2<<" ";
        print++;
        if(print==n)break;
        
    }


}
