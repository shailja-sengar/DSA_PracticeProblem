#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int> &arr, int n){
    //Base Condition
    if(n == 1){
        return ;
    }

    //Body
    //Run the loop for the first pass so that the largest element will be at the last of the array
    for(int i=0; i<arr.size(); i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }

    // Recall the function for remaining passes with the less size
    bubbleSort(arr, n-1);
}

int main(){
    vector<int> arr = {5, 1, 4, 2, 8};
    int n = arr.size();

    bubbleSort(arr, n);
    
    cout<<"[";
    for(int i=0; i<arr.size()-1; i++){
        cout<<arr[i]<<", ";
    }

    cout<<"]";

    return 0;
}