// SET - 01
// ISHIKA BANSAL
// 2010990314

//Q1
#include <bits/stdc++.h>
using namespace std;

void uniqueEle(int* arr, int n){
    unordered_map<int,int> hash;
    
    for(int i=0;i<n;i++){
        //creating hash map
        //to check if there is an inc is same key
        hash[arr[i]]++;
    }
    
    cout<<"unique elements are - ";
    //iterator->first == key(element value)
    //iterator->second == value(frequency)
    
    for(auto it=hash.begin();it!=hash.end();it++)
    if(it->second==1)
    //if freq=1, it means ele is unique
    cout<<(it->first)<<" ";

}

int main()
{
    int n;
    
    //taking input and saving in n
    cout<<"enter array length";
    cin>>n;
    cout<<endl;
    int* arr=(int*)(malloc(sizeof(int)*n));
    
    cout<<"enter ele";
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    uniqueEle(arr,n);

    return 0;
}