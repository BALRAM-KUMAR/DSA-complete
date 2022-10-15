Given an array, rotate the array by one position in clock-wise direction.
 

Example 1:

Input:
N = 5
A[] = {1, 2, 3, 4, 5}
Output:
5 1 2 3 4
  
  approach two pointer
  void rotate(int arr[], int n)
{
    int s=0;
    int e=n-1;
    swap(arr[s],arr[e]);
         s+=1;
      while(s<e){
          swap(arr[s],arr[e]);
          s++;
      }
}

time = O(n)
space=O(1)
