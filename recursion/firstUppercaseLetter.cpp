#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

char firstUppercase(string & s, int i){
    if(s[i] == '\0'){
        return 0;
    }

    if(isupper(s[i]))
    {
        return s[i];
    }

    return firstUppercase(s, i+1);
}
int main(){
    string s = "geekforgeeKs";

    cout<< firstUppercase(s, 0);
    
    return 0;
}