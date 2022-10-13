#include<bits/stdc++.h>
using namespace std;

void findNumber(int n){
    if(n == 0){
        cout<<"0"<<endl;
        return;
    }

    if(n % 9 != 0){
        cout<<(n % 9);
    }

    for(int i = 0;i<n/9;i++){
        cout<<"9";
    }

    for(int i = 0;i<n;i++){
        cout<<"0";
    }

    return;
}

int main(){
    int n = 10;
    findNumber(n);
    return 0;
}