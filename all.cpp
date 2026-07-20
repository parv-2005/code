#include <bits/stdc++.h>
using namespace std;

int main() {
int arr[7]= { 1,0,1,0,1,0,0};
int z = 0;
int one = 0;
for(int i =0; i<7;i++){
    if(arr[i]==1){
        one++;
    }
    else{
        z++;
    }
}
if(z<one){
    cout<<"good";
}
else{
    cout<<"bad";
}
}
