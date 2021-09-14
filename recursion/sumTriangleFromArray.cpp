// que link: https://www.geeksforgeeks.org/sum-triangle-from-array/

#include<iostream>
#include<vector>
using namespace std;

void printTriangle(vector<int>&arr, int n){
   //Base condition
    if(n < 1){
        return ;
    }
   //Body
    //making temprery array so that we can store the ans of two consicutive elements' addition
    vector<int>temp(n-1);

    //Run the for loop for getting the addition of two element;
    for(int i=0; i<n; i++){
        int x = arr[i] + arr[i+1];
        temp.insert(temp.begin()+i, x);
    }

    //Now we have the arry temp , and for getting the next level answer we have to pass this array to function prinTriangle as parameter
    printTriangle(temp, n-1);

    //finally, we'll print the all levels in reverse order
     for(int i=0; i<n; i++){
         if(i == n-1){
             cout<<arr[i]<<" ";
         }
         else{
             cout<<arr[i]<<", ";
         }     
     }
    cout<<endl;

}
int main(){
    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();

    printTriangle(arr, n);

    return 0; 
}