#include<iostream>
#include<vector>
using namespace std;

double findMaxAverage(vector<int> & nums, int k){
    int i=0, j=0;
    int n = nums.size();
    double sum, ans = INT32_MIN;

    while(j < n){
        sum += nums[j];

        if(j-i+1 < k){
            j++;
        } 

        else if(j-i+1 == k){
            ans = max(ans, sum);
            sum = sum - nums[i];
            i++, j++;
        }
    }

    return ans/k;
}
int main(){
 vector<int>nums = {1,12,-5,-6,50,3};
 int k = 4;

 cout<<findMaxAverage(nums, k);

 return 0;   
}

//Asked In: Amazon, Google :)