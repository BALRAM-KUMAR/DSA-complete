       i j
arr[]={5 3 2 4 1}
inversion count means i<j(move only forward direction)
                   and left >right(arr[i]>arr[j])
 So the pair is 
  (5 3)     (3,2)  (2, 1)   (4, 1)
  (5 2)     (3,1)
  (5 4)
  (5 1)          return total pair=8
  
Approach 1:-
    time=O(n*n)
    space=O(1)
    cnt=0;
for(i=0;i<n;i++)
{
  for(j=i+1;j<n;j++)
  {
  if(arr[i]>arr[j])
  {
    cnt+=1;
  }
  }
}


Approach 2:- using merge sort

#include<bits/stdc++.h>
using namespace std;
int merge(vector<int>&arr,int s,int e){
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
            cnt+=mid-left+1;             //how ????   think about two sorted arrays and we are going to find pair
            temp.push_back(arr[right++]);       //  index:-       0   1  2 
        }                                       //   value:-left->(2) 3 (5)<-mid      1 4
    }                                           //   if 2>1 means 3 and 5 is also greater so
                                                //     cnt+=mid-left+1;  =2-0+1=3 desired element
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
  return cnt;
}
int merge_Sort(vector<int>&arr,int s,int e){
    if(s>=e){
        return 0;
    }
    int mid=(s+e)/2;
    int c1=merge_Sort(arr,s,mid);
    int c2=merge_Sort(arr,mid+1,e);
    int c3 = merge(arr,s,e);
  return c1+c2+c3;
}
  
