#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int> &arr, int n){
    if(n == 1){
        return ;
    }

    insertionSort(arr, n-1);

    int last = arr[n-1];
    int j = n-2;

    while(j >=0 && j > last){
        arr[j+1] = last;
        j--;
    }
    arr[j+1] = last;
}
int main(){
    vector<int> arr  = {0,4,5,1};
    int n =arr.size();

    insertionSort(arr, n);

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i];
    }

    return 0;
}