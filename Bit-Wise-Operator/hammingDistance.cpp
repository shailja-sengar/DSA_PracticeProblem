#include<iostream>
using namespace std;

int hammingDis(int x, int y){
    int n = x ^ y;
    int dis = 0;

    while(n > 0){
        n = n & (n-1);
        dis++;
    }
    return dis;
}
int main(){
    int x = 3;
    int y = 1;

    cout<<hammingDis(x, y);

    return 0;
}