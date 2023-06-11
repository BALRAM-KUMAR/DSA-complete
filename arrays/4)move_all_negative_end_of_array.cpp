https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/

Example 1:

Input : 
N = 8
arr[] = {1, -1, 3, 2, -7, -5, 11, 6 }
Output : 
1  3  2  11  6  -1  -7  -5
  
  void segregateElements(int arr[],int n)
    {
         vector<int> a;
         for(int i=0;i<n;i++){
             if(arr[i]>0)
              {
                a.push_back(arr[i]);  
              }
         }
         for(int i=0;i<n;i++){
             if(arr[i]<0)
              {
                a.push_back(arr[i]);  
              }
         }
         for(int i=0;i<n;i++)
         {
             arr[i]=a[i];
         }    
    }
Approach 2:-//Two pointer approach
  void rearrange(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
}
