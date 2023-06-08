tc(always(nlogn)
sc(o(N)

#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&arr,int s,int e){
  //think about only 2 4 5   1 5 8 9
  //or think merge two sorted arrays
    int left=s;
    int mid=(s+e)/2;
    int right=mid+1;
    vector<int> temp;
    while(left<=mid and right<=e){
        if(arr[left]<arr[right]){
            temp.push_back(arr[left++]);
        }
        else{
            temp.push_back(arr[right++]);
        }
    }
    
    while(left<=mid){
        temp.push_back(arr[left++]);
    }
    while(right<=e){
        temp.push_back(arr[right++]);
    }
    int k=0;
    for(int i=s;i<=e;i++){
        arr[i]=temp[k++];
    }
}
void merge_Sort(vector<int>&arr,int s,int e){
    if(s>=e){
        return;
    }
    int mid=(s+e)/2;
    merge_Sort(arr,s,mid);
    merge_Sort(arr,mid+1,e);
    return merge(arr,s,e);
}
int main(){
    int n=9;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    merge_Sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}
