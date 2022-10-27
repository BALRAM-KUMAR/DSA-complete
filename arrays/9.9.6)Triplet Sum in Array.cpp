Given an array arr of size n and an integer X. Find if there's a triplet in the array which sums up to the given integer X.
Example 1:

Input:
n = 6, X = 13
arr[] = [1 4 45 6 10 8]
Output:
1
Explanation:
The triplet {1, 4, 8} in 
the array sums up to 13.
Example 2:

Input:
n = 5, X = 10
arr[] = [1 2 4 3 6]
Output:
1
Explanation:
The triplet {1, 3, 6} in 
the array sums up to 10.
  solution 1:- time=O(n2) and space=O(n)
     int ans=0;
for(int i=0;i<n-2;i++)
{
   unordered_set<int>s;
  int curr=x-a[j];
  for(int j=i+1;j<n;j++){
      if(s.find(curr-a[j])!=s.end){
          ans=1;
          break;
      }
    s.insert(a[j]);
  }
}
return ans;

solution 2:- time=O(n2) and space=O(1)
   sort(a,a+n);
   int ans=0;
for(int i=0;i<n-2;i++){
     int l=i+1;
     int r=n-1;
     while(l<r){
        if(a[i]+a[l]+a[r]==x){
           ans=1;
          return ans;
        }
       else if(a[i]+a[l]+[r]<x){
          l++;
       }
       else{
          r--;
       }
    }
}

solution 3:- Bruteforce O(n3)
  
