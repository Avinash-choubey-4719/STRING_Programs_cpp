#include<bits/stdc++.h>
using namespace std;

int KthlevelProduct(string str, int k){
    int level = -1;

    int product = 1;

    for(int i = 0;i<str.length();i++){
        if(str[i] == '('){
            level++;
        }

        else if(str[i] == ')'){
            level--;
        }

        else if(k == level){
            product = product * (str[i] - '0');
        }
    }

    return product;
}

int main(){
    string str = "(0(5(6()())(4()(9()())))(7(1()())(3()())))";
    int k = 2;
    int result = KthlevelProduct(str, k);

    cout<<result<<endl;
    return 0;
}