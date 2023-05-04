N = 9
A[] = {5, 6, 7, 8, 9, 10, 1, 2, 3}
key = 10
  see the array is sorted but in roated manner 
  
  Approach1:- linaer search which is brute force technique
  
  approach 2:-
    int search(int arr[], int l, int h, int key){
        while(l<=h){
            int mid=(h+l)/2;
            if(arr[mid]==key){
                return mid;
            }
            if(arr[l]<=arr[mid]){
              if(key>=arr[l]&&key<=arr[mid]){
                  h=mid-1;
              }
              else{
                  l=mid+1;
              }
            }
            else{
                if(key>=arr[mid]&&key<=arr[h]){
                    l=mid+1;
                }
                else{
                    h=mid-1;
                }
            }
        }
        return -1;
    }
