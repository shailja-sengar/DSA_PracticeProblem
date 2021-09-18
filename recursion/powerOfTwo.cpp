#include<iostream>
using namespace std;

bool isPowerOfTwo(int n){
    //Base condition
    if(n == 1){
        return true;
    }
    
    //Body
    if(n%2 !=0 || n==0){
        return false;
    }

    if(isPowerOfTwo(n/2)){
        return true;
    }

    return false;
}
int main(){
    int n= 16;

    if(isPowerOfTwo(n) == 0){
        cout<<"false";
    }
    else{
        cout<<"true";
    }

    return 0;
}