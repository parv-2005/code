#include <bits/stdc++.h>
using namespace std;

int main() {
 int s ,e;
 int count = 0;
 cin>>s;
 cin>>e;
 for(int i = s;i<=e;i++){
     int n = i;
     int sum =0;
     int digit = to_string(n).length();
     while(n>0){
         int rem = n%10;
         sum = sum + pow(rem,digit);
         n=n/10;
     }
     if(sum == i){
         cout<<i<<" ";
         count++;
         
     }
 }
 if(count==0){
     cout<<-1;
 }

}
