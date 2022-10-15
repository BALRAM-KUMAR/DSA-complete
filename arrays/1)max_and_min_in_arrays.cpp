pair<long long, long long> getMinMax(long long arr[], int n) {
    long long int max=-9999999;
   long long int min=9999999;
   for(int i=0;i<n;i++)
   {
       if(min>arr[i])
       {
           min=arr[i];
       }
       if(max<arr[i])
       {
           max=arr[i];
       }
   }
   
   pair<long long,long long> pair(min,max);
   return pair;
}
