#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

vector<int> rankOfArray(vector<int> &arr){
    vector<int>v = arr;
    unordered_map<int, int>ump;
    int rank =1;

    sort(v.begin(), v.end());
    for(auto x : v){
        if(ump.find(x) == ump.end()) ump[x] = rank++;
    }

    for(int i=0; i<arr.size(); i++){
        arr[i] = ump[arr[i]];
    }

    return arr;
}
int main(){
    vector<int>arr = {40,30,20,10};
    vector<int>ans;
    ans = rankOfArray(arr);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}