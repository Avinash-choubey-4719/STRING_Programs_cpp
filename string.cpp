#include<bits/stdc++.h>
using namespace std;

int main(){
    char str[3][10] = {"avinash", "parag", "deepesh"};
    cout<<str[0]<<endl;

    int n[3][10] = {{1, 2, 3}, {4, 5, 6}};
    cout<<n[0]<<endl;

    vector<string>vstr = {"avinash", "parag", "deepesh"};
    cout<<vstr[0]<<endl;

    array<string, 3>astr = {"avinash", "parag", "deepesh"};
    cout<<astr[0]<<endl;

    return 0;
}