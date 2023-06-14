Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
  
Approach 1:- bruteforce 
  for(int i=0;i<n;i++){
     for(int j=i+1;j<n;j++){
       if(arr[i]<arr[j])
        {
          maxi=max(maxi,arr[j]-arr[i])
         }
       }
    }
    
Approach 2:- 
  
  int maxProfit(vector<int> &prices)
{
  int maxPro=0;
  int minPrice=INT_MAX;
  for(i=0;i<prices.size();i++){
    minPrice=min(minPrice,price[i]);
    maxPro=max(maxPro,price[i]-minPrice)
    }
  return maxPro;
}

time =o(n)
