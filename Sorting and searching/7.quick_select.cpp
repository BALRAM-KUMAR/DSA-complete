approach 1:- we can sort the array and return the desired value but time complexity alwaysO(nlogn)
  
approach 2:- based on the quick sort algorithms where avg and best case tc=O(N) but wrost case tc->O(N*N)
  
#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>&arr,int s,int e){
    int pivot=arr[e];
    int i=s-1;
    for(int j=s;j<e;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[e]);
    return i+1;
}
int quick_Sort(vector<int>&arr,int s,int e,int k){
    int p=partition(arr,s,e);
    if(k==p){
        return arr[p];
    }
    else if(k<p){
    quick_Sort(arr,s,p-1,k);
    }
    else{
    quick_Sort(arr,p+1,e,k);
        
    }
    
}

int main(){
    int n=6;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
   cout<< quick_Sort(arr,0,n-1,2);
    
    
}
