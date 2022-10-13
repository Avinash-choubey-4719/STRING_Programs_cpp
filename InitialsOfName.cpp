#include<bits/stdc++.h>
using namespace std;

void findInittials(string str){
    stringstream x(str);

    while(getline(x, str, ' ')){
        cout<<str[0]<<" ";
    }
    return;
}

int main(){
    string str = "this is the name";
    findInittials(str);
    return 0;
}