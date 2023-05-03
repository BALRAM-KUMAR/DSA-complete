input:- 
  s1="xy"
  s2="12"
  String[] results = {"1XY2", "Y1X2", "Y21XX"};
 output:- 
   1XY2 is a valid shuffle of XY and 12
   Y1X2 is a valid shuffle of XY and 12     
   Y21XX is not a valid shuffle of XY and 12
 point to remember:-
   1.Valid shuffle string means the resultant string contain All value of s1 and s2 (must be not reapeated)
   2.order of string must be same
   
   
   Approach:-
     void ShuffleString(string s1,string s2,string res)
   {
       int l1=s1.length();
       int l2=s2.length();
       int re=res.length();
       if(l1+l2!=res)
         cout<<"no";
       else {
          int i=0,j=0,k=0;//i for s1 j for s2 and k for res
          int f=0;
         while(k<re) 
         {
           if(i<l1 and s1[i]==res[k]) i++;        
           else if(j<l2 and s2[j]==res[k]) j++;
           else{
             f=1;
             break;
           }
           k++;
         }
       if(i<l1 or j<l2) cout<<"no";
       else cout<<"yes";
       }
   }
