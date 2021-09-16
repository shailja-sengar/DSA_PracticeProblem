#include<iostream>
#include<string>
using namespace std;

int  lengthOfString(char* s ){
    if(*s == '\0'){
        return 0;
    }

    int length=0;
    
    return 1 + lengthOfString(s+1);
}
int main(){
    char s[] = "abcd";

    cout<<lengthOfString(s);

    return 0;
}