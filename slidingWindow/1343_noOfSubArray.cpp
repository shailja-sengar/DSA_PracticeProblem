#include<iostream>
#include<vector>
using namespace std;

int  numOfSubarrays(vector<int> &nums, int k, int threshold){
    int i=0, j=0, sum=0, cnt=0;

    while(j < nums.size()){
        sum += nums[j];

        if(j-i+1 < k){
            j++;
        }
        else if(j-i+1 == k){

            if(threshold <= sum/k){
                cnt++;
            }

            sum = sum - nums[i];
            i++, j++;
        }
    }

    return cnt;
}
int main(){
    vector<int>nums = {2,2,2,2,5,5,5,8};
    int k=3;
    int threshold = 4;

    cout<<numOfSubarrays(nums, k, threshold);

    return 0;
}