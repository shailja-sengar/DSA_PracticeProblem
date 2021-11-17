#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
#define llint long long int
int  t[4][51]; 
       //globally define matrix for memoized and tabulation version 

//Recursive version
int knapsack_recursive(vector<int> &wt, vector<int> &val, int w, int n){
    //base condition
    if(n==0 || w == 0){
        return 0;
    }

    if(wt[n-1] <= w){
        return max(val[n-1] + knapsack_recursive(wt, val, w-wt[n-1], n-1), knapsack_recursive(wt, val, w, n-1));
    }
    else{
        return knapsack_recursive(wt, val, w, n-1);
    }

}

//memoized version

int knapsack_memoized(vector<int> &wt, vector<int> &val, int w, int n){
    if(n==0 || w==0){
        return 0;
    }

    if(t[n][w] != -1){
        return t[n][w];
    }

    if(wt[n-1] <= w){
        return t[n][w] =  max(val[n-1] + knapsack_memoized(wt, val, w-wt[n-1], n-1), knapsack_memoized(wt, val, w, n-1));
    }
    else{
        return t[n][w] = knapsack_memoized(wt, val, w, n-1);
    }

}

//Tabulation or Bottom-up version
int knapsack_tabulation(vector<int> &wt, vector<int> &val, int w, int n){
    for(int i=0; i<=n; i++){
        for(int j=0; j<=w; j++){
            if(i==0 || j==0){
                t[i][j] = 0;
            }
        }
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=w; j++){
            if(wt[i-1] <= j){
                t[i][j] = max(val[i-1] + t[i-1][j-wt[i-1]], t[i-1][j]);
            }
            else{
                t[i][j] = t[i-1][j];
            }
        }
    }
    return t[n][w];
}

int main(){
     memset(t, -1, sizeof(t));
    vector<int> wt = {10, 20, 30};
    vector<int> val = {60, 100, 120};
    int w = 50;
    int n = wt.size();
    cout<<knapsack_recursive(wt, val, w, n);
    cout<<knapsack_memoized(wt, val, w, n);
    cout<<knapsack_tabulation(wt, val, w, n);

    return 0;
}    

