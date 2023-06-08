logn logn but in wrost case n*n

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
void quick_Sort(vector<int>&arr,int s,int e){
    if(s>=e){
        return;
    }
    
    int p=partition(arr,s,e);
    quick_Sort(arr,s,p-1);
    quick_Sort(arr,p+1,e);
}
int main(){
    int n=9;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    quick_Sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}
