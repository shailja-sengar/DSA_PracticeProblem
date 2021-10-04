#include<iostream>
using namespace std;

int compliment(int n){
    int copy = n;
    int i =0;
    while(copy != 0){
        copy >>= 1;
        n ^= (1 << i);
        i += 1;
    }
    return n;
}
int main(){
    int n = 5;

    cout<< compliment(n);

    return 0;
}