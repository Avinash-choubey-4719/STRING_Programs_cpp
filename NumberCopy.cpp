#include<bits/stdc++.h>
using namespace std;

int numberCopy(int n){
    int result = 0;
    int multiply = 1;

    while(n){
        int remainder = n % 10;

       if(remainder == 4){
          result = 3 * multiply + result;
       }

       else{
        result = remainder * multiply + result;
       }

        multiply *= 10;
        n /= 10;

    }

    cout<<result<<endl;
    return 0;
}

int main(){
    int n = 124;
    int result = numberCopy(n);
    return 0;
}