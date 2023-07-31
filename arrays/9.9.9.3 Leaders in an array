Given an array A of positive integers. Your task is to find the leaders in the array. 
An element of array is leader if it is greater than or equal to all the elements to its right side.
The rightmost element is always a leader.
Input:
n = 6
A[] = {16,17,4,3,5,2}
Output: 17 5 2

code:-  
vector<int> leaders(int a[], int n){
        // Code here
        vector<int> vect;
        if(n==1){
            vect.push_back(a[n-1]);
            return vect;
        }
        int max=a[n-1];
        for(int i=n-1;i>=0;i--)
        {
            
            if(max<=a[i]){
                vect.push_back(a[i]);
                max=a[i];
            }
        }
        
        reverse(vect.begin(),vect.end());
        return vect;
        
    }
