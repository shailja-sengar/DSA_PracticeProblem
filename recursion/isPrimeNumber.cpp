#include<iostream>
using namespace std;

bool isPrime(int n, int i){
    if(i == n){
        return true;
    }

    if(n%i == 0){
        return false;
    }

    if(isPrime(n, i+1)){
        return true;
    }

    return false;
}
int main(){
    int n =29;
    int i=2;

    if(isPrime(n, i) == 0){
        cout<<"false";
    }
    else{
        cout<<"true";
    }

    return 0;
}