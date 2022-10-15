Example 1:
Input: Array = [1,2,6,4,5,3] , K = 3 
Output: kth largest element = 4, kth smallest element = 3

Example 2:
Input: Array = [1,2,6,4,5] , k = 3
Output : kth largest element = 4,  kth smallest element = 4

Solution 1: Sorting the Array(First approach(A simple approach)
The most naive approach is to sort the given array in descending order.
The index of kth Largest element = k-1 ( zero-based indexing ) 
The index of kth Smallest element = n-k 
The array can also be sorted in ascending order.
The index of kth Largest element = n-k 
The index of kth Smallest element = k-1 ( zero based indexing )
codeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee
void kth_Largest_And_Smallest_By_AscendingOrder(vector<int>&arr, int k) {

        sort(arr.begin(), arr.end())  ;
        int n = arr.size()  ;

        cout << "kth Largest element " << arr[n - k] << ", " << 
        "kth Smallest element " << arr[k - 1];
    }
} ;
Solution 2: Using Quickselect Algorithm
->Choose any random element as PIVOT.
->Use Partition Algorithm to partition the given array into 2 parts and place the PIVOT at its correct position ( called as index ).
->Partition Algorithm : All the elements are compared to the PIVOT, and the elements less than the PIVOT are shifted 
   towards the left side of the array and greater are shifted toward the right side of the array.
->Now since, all elements right to the PIVOT are greater and left to the PIVOT are smaller , compare index with N-k 
    ( where N = size of array )  and recursively find the part to find the Kth largest element.
->The worst case time complexity of this method is O(n^2) but its Average time complexity is O(n).
Kth smallest element
  int partition(int arr[],int s,int  e)
  {
   int pivet=arr[e]
   int i=s-1;
   for(int j=s;j<e;j++)
        {
          if(arr[j]<pivot){
            i++;
             swap(arr[i],arr[j])
             }
         }
       swap(arr[i+1},arr[j]);
       return i+1;
     }
     int quick_select(int a[],int s,int e,int k){
        int p=partition(a,s,e);
         if(p==k)
         {
          return a[p];
          }
          else if(k<p)
          {
            return quick_select(a,s,p-1,k);
           }
           else{
             return quick_sort(a,p+1,e,k)
             }
        }
        
 note :- solution takes time O(n) and space O(1)
 
 Kth largest element
   #include <bits/stdc++.h>
using namespace std ;

int partition(vector<int>& arr, int left, int right) {
    int pivot = arr[left] ;
    int l = left + 1 ;
    int r = right;
    while (l <= r) {
        if (arr[l] < pivot && arr[r] > pivot) {
            swap(arr[l], arr[r]);
            l++ ;
            r-- ;
        }
        if (arr[l] >= pivot) {
            l++;
        }
        if (arr[r] <= pivot) {
            r--;
        }
    }
    swap(arr[left], arr[r]);
    return r;
}

int kth_Largest_Element(vector<int>& arr, int k) {
    int left = 0, right = arr.size() - 1, kth;
    while (1) {
        int idx = partition(arr, left, right);
        if (idx == k - 1) {
            kth = arr[idx];
            break;
        }
        if (idx < k - 1) {
            left = idx + 1;
        } else {
            right = idx - 1;
        }
    }
    return kth;
}


Solution 3: Using Heap
->The idea is to construct a max-heap of elements . Since the top element of the max-heap is the largest element of the heap , 
    we will remove the top K-1 elements from the heap .  The top element will be Kth Largest element.
->To get the Kth Smallest element , we will use a min-heap . After removal of top k-1 elements , the Kth Smallest element is top of the Priority queue.
Let the array be
[17,7,2,30,21] and k = 3
  
             
 
