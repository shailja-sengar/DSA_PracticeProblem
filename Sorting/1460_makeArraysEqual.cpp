#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool canBeEqual(vector<int> &target, int m, vector<int> &arr, int n)
{
    if(m != n)
    {
        return false;
    }

    int i=0, j=0;
    while(i<m && j<n){
        if(target[i] != arr[j]){
            return false;
        }
        i++, j++;
    }

    return true;
}
int main(){
    vector<int>target = {3,4,1,5};
    vector<int>arr = {1,3,5,4};

    int m = target.size();
    int n = arr.size();

    if(canBeEqual(target, m, arr, n) == 0){
        cout<<"True";
    }

    else{
        cout<<"False";
    }

    return 0;
}

//Asked in: Facebook :)