#include<iostream>
#include<vector>
using namespace std;

void recursiveSol(vector<char> & s, int start, int end){
       if(start >= end){           //base condition, we'll go till the middle of the string as 
                                          //we are swapping the first and the last element
           return ;
       }

       swap(s[start], s[end]);             
       start++, end--;                   //after swapping we have to increement start index and decreement end index

       recursiveSol(s, start, end);      // and again calling the same function with different starting and ending index
}

void reverseString(vector<char> & s){            // it's a leetcode function, we can also define onle one function also
    recursiveSol(s, 0, s.size()-1);         
}

int main(){
    vector<char> s = {'H', 'e', 'l', 'l', 'o'};

    reverseString(s);
    cout<<"[";
    for(int i=0; i<s.size(); i++){
        cout<< s[i] << ", ";
    }
    cout<<"]";

    return 0;
}