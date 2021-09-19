#include<iostream>
#include<vector>
using namespace std;

bool ifSorted(vector<int> &arr, int n){
    if(n == 1 || n==0){
        return true;
    }

    if(arr[n-1] < arr[n-2]){
        return false;
    }
    
    if(ifSorted(arr, n-1)){
        return true;
    }

    return false;
}
int main(){
    vector<int> arr = {20, 30, 45, 89, 89, 90};
    int n = arr.size();

    if(ifSorted(arr, n)){
        cout<<"yes";
    }
    else{
        cout<<"No";
    }

    return 0;
}
