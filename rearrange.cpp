#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    int arr1[n];
    int count = 0;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        arr1[i]=arr[i];
    }
    sort(arr1,arr1+n);
    for(int i = 0;i<n;i++){
        if(arr1[i]!=arr[i]){
            count++;
        }
    }
    cout<<count<<endl;

}
