https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1

if negative alemment is not allowed

code
   int getMinDiff(int arr[], int n, int k) {
        
        sort(arr,arr+n);
       int ans = arr[n-1]-arr[0];
       int smallest=arr[0]+k;
       int largest = arr[n-1]-k;
       int mi,ma;
       for(int i=0;i<n-1;i++)
       {
           mi=min(smallest,arr[i+1]-k);
           ma=max(largest,arr[i]+k);
           if(mi<0)
           continue;
           ans=min(ans,ma-mi);
       }
      return ans;
    }
Expected Time Complexity: O(N*logN)
Expected Auxiliary Space: O(N)
  
  
if negative element is required

int getMinDiff(int arr[], int n, int k) {
        
        sort(arr,arr+n);
       int ans = arr[n-1]-arr[0];
       int smallest=arr[0]+k;
       int largest = arr[n-1]-k;
       int mi,ma;
       for(int i=0;i<n-1;i++)
       {
           mi=min(smallest,arr[i+1]-k);
           ma=max(largest,arr[i]+k);
           ans=min(ans,ma-mi);
       }
      return ans;
    }
