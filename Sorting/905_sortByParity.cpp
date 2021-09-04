#include<iostream>
#include<vector>
using namespace std;

/*void swap(int & a, int &b){
    int temp = a;
        a = b;
        b = temp;
} */
vector<int> sortByParity(vector<int> &nums, int n){
    int i=0, j= n-1;

    while(i < j){
        if(nums[i]%2 != 0){
            swap(nums[i], nums[j]);
            j--;
        }

        else{
            i++;
        }
    }

    return nums;
}
int main(){
    vector<int>nums = {3,1,2,4};
    int n = nums.size();

    sortByParity(nums, n);

    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
}