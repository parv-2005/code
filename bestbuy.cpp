#include <bits/stdc++.h>
using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     int res =INT_MIN;
//     for(int i = 0; i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i = 0 ; i<n-1;i++){
//         int buy = arr[i];
//         for(int j = i+1;j<n;j++){
//             int ans = arr[j]-buy;
//             res = max(res,ans);
//         }
        
//     }
//     cout<<res;
// }
int main(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    int bestbuy = arr[0];
    int res = INT_MIN;
    for(int i = 1;i<n;i++){
        if(arr[i]<bestbuy){
            bestbuy = arr[i];
        }
        res = max(res,arr[i]-bestbuy);
    }
    cout<< res;
}