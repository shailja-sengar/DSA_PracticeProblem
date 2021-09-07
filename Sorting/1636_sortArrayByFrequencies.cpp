#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

vector<int> frequencySort(vector<int> &nums){
    unordered_map<int, int>ump;

    for(auto x : nums){
        ump[x]++;
    }
    //lambda function
    sort(nums.begin(), nums.end(), [&] (int a, int b){
        return ump[a] != ump[b] ? ump[a] < ump[b] : a > b;
    });

    return nums;
}
int main(){
    vector<int> nums = {1,1,2,2,3,1};
    vector<int>ans;
     
    ans = frequencySort(nums);
 
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;

}