#include<bits/stdc++.h>
using namespace std;

vector<string> listOfWords(string str){
    istringstream ss(str);

    vector<string>result;
    string word = "";

    while(ss >> word){
        result.push_back(word);
    }

    return result;
}

bool hasFourConsonants(string str){
    int l = str.length();

    if(l < 4){
        return false;
    }

    for(int i = 3;i<l;i++){
        if((str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u') &&
           (str[i - 1] != 'a' && str[i - 1] != 'e' && str[i - 1] != 'i' && str[i - 1] != 'o' && str[i - 1] != 'u') &&
           (str[i - 2] != 'a' && str[i - 2] != 'e' && str[i - 2] != 'i' && str[i - 2] != 'o' && str[i - 2] != 'u') &&
           (str[i - 3] != 'a' && str[i - 3] != 'e' && str[i - 3] != 'i' && str[i - 3] != 'o' && str[i - 3] != 'u')){
            return true;
           }
    }
    return false;
}

bool hasMoreConsonants(string str){
    int vowel = 0;
    int consonant = 0;

    for(int i = 0;i<str.length();i++){
        if(str[i] == 'a' || str[i] == 'i' || str[i] == 'e' || str[i] == 'o' || str[i] == 'u'){
            vowel++;
        }
        else{
            consonant++;
        }
    }

    return consonant > vowel;
}

bool isHard(string str){
    if(hasFourConsonants(str) || hasMoreConsonants(str)){
        return true;
    }

    return false;
}

int hardness(int hardwords, int easywords){
    return 5 * hardwords + 3 * easywords;
}

int main(){
    string str = "difficulty of sentence";

    vector<string>result = listOfWords(str);

    int hardwords = 0;
    int easywords = 0;

    for(auto i : result){
        if(isHard(i)){
            hardwords++;
        }
        else{
            easywords++;
        }
    }

    int difficulty = hardness(hardwords, easywords);
    cout<<difficulty<<endl;
    return 0;
}