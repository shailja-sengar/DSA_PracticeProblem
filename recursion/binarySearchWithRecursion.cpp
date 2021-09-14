#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& arr, int target, int start, int end){
    if(start > end){
        return -1;
    }

    int mid = start + (end - start)/2;

    if(arr[mid] == target){
        return mid;
    }

    if(arr[mid] > target){
        return search(arr, target, start, mid-1);
    }

    if(arr[mid] < target){
       return search(arr, target, mid+1, end);
    }

   return -1;
}
int main(){
    vector<int> arr = {1,2,3,4,5,6};
    int target = 3;
    int start=0, end = arr.size()-1;

    cout<< search(arr, target, start, end);

    return 0;
}
