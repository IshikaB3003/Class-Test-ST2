// SET - 01
// ISHIKA BANSAL
// 2010990314

//Q2

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int i,j,n,count;
    
    //taking input and saving in n
    cout<<"Enter no of ele";
    cin>>n;
    
    //we will save ele entered by user in array
    //hence first we create an array of size n statically
    
    int rep[n];
    
    //taking input of ele in the array
    //by traversing using a for loop in the created array
    
    cout<<endl<<"Enter the elements:";
    for(i=0; i<n; i++){
       cin>>rep[i];
    }
    
    //we have to print no's only once
    //so we use bool flag to mark whether we have added rep[j] already or not
    //if flag == 1 i.e we have counted frequency of num 
    //we don't want it to be printed twice
    //if flag == 0, we haven't yet cosidered ele to count our freq
    
    
    
    // initializing an array of flag with all ele 0
    int flag[n]={0};   
    
    cout<<endl<<"repeated numbers and their frequency - ";
    for(i=0;i<n;i++){
      count=0;
      
      //if flag = 0 ele isn't considered 
      if(flag[i]!=1){
         for(j=0; j<n; j++){
            if(rep[i]==rep[j]){
              count++;  
              //now we'll set flag=1 so that no more output of same no is done
              flag[j]=1;
            }
         }
         
         //if count>1 it means num is repeated so we'll print it
         if(count>1)      {
           cout<<endl<<rep[i]<<" num repeated, *times="<<count;
         }
      }
    }

    return 0;
}


