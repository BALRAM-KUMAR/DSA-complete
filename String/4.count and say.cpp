string count(int n)
{
  if(n==1) return "1";
  if(n==2) return "11";
  string s="11";
  
  for(int i=2;i<n;i++)
  {
     string empty="";
     s=s+'&';
     int c=1;
     for(int j=1;j<s.length();j++)
     {
       if(s[j]!=s[j-1])
       {
         empty=empty+to_string(c);
         empty=empty+s[j-1];
         c=1;
       }
       else{
         c++
         }
     }
     s=empty;
  }
  return s;
  
}

Expected Time Complexity: O(2n)
Expected Auxiliary Space: O(2n-1)  

