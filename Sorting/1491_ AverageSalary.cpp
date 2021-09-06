#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int averageSalary(vector<int> &salary, int n){
    sort(salary.begin(), salary.end());
    int sum=0;
    for(int i=1; i<n-1; i++){
        sum += salary[i];
    }

    return sum / (n-2);
}

int main(){
    vector<int>salary = {2000, 1000, 3000, 4000};
    int n = salary.size();

    cout<<"Average salary excluding maximum and minimum salary: "<< averageSalary(salary, n);

    return 0;
}