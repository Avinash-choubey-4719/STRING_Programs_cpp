#include<bits/stdc++.h>
using namespace std;

int maxXOR(int arr[], int n){
    int ans = INT_MIN;

    for(int i = 0;i<n;i++){
        int value = 0;
        for(int j = 0;j<n;j++){
            value = arr[i] ^ arr[j];
            ans = max(value, ans);
        }
    }
    return ans;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};

    int ans = maxXOR(arr, 5);
    cout<<ans<<endl;
    return 0;
}