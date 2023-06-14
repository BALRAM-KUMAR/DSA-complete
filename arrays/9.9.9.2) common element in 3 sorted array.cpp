Example 1:

Input:
n1 = 6; A = {1, 5, 10, 20, 40, 80}
n2 = 5; B = {6, 7, 20, 80, 100}
n3 = 8; C = {3, 4, 15, 20, 30, 70, 80, 120}
Output: 20 80
Approach 1:- 
  myset1 me arr1 daalo
  myset1 me arr2 search kro aur vector me common ko push kro
  myse2 me arr3 ko daalo
  myset2 me vector element ko khojo aur new vector me push kro
  vector <int> commonElements (int a[], int b[], int c[], int n1, int n2, int n3)
        {
            //code here.
              unordered_set<int> myset;
              unordered_set<int> myset1;
              vector<int> v;
                
                for(int i=0;i<n1;i++){
                    myset.insert(a[i]) ;             
                    }
                 for(int i=0;i<n2;i++){
                       if(myset.find(b[i])!=myset.end()){
                            
                            v.push_back(b[i]);
                            myset.erase(b[i]);
                            }
                       }
                 
              //return v;
              for(int i=0;i<n3;i++){
                    myset1.insert(c[i]) ;             
                    }
                    
                vector<int> v1;
                for(int i=0;i<v.size();i++){
                      if(myset1.find(v[i])!=myset1.end()){
                          v1.push_back(v[i]);
                          myset1.erase(v[i]);
                      }
                }
                return  v1;
                
        }

Tc =O(N1+N2+N3)
sc=O(N1+N2+N3)
  
  Approach 2:- optimal convert two pointer approach into 3 pointer
  
Tc =O(N1+N2+N3)
sc=O(1)
    vector<int> common;
    int i=0;j=0;k=0;
while(i<n1 && j<n2 && k<n3)
{
    if(a[i]==b[j] && a[i]==c[k] && a[i]!=last)
    {
      common.push_back(a[i]);
      last=a[i];
      i++;
      j++;
      k++;
    }
  else if(min(a[i],a[j],a[k])==a[i]) i++;
   else if(min(a[i],a[j],a[k])==a[j]) j++;
   else k++
  }
return common;
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
    
