#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

vector<int> smallerNoThanCurr(vector<int> &nums){
    vector<int>v = nums;
    unordered_map<int, int>ump;

    sort(v.begin(), v.end());

    for(int i=0; i<v.size(); i++){
        if(ump.find(v[i]) == ump.end()){
            ump[v[i]] = i; 
        }
    }

    for(int i=0; i<nums.size(); i++){
        nums[i] = ump[nums[i]];
    }

    return nums;
}
int main(){
    vector<int>nums = {8,1,2,2,3};
    vector<int>ans;

    ans = smallerNoThanCurr(nums);

    for(auto i : ans){
        cout<<i<<" ";
    }

    return 0;
}