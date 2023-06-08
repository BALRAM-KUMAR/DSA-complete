#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=6;
    vector<int>vect(n);
    for(int i=0;i<n;i++){
        cin>>vect[i];
    }
    for(int i=0;i<n;i++){
        int min_index=i;
        for(int j=i;j<n;j++){
            if(vect[j]<vect[min_index]){
                min_index=j;
            }
        }
        swap(vect[i],vect[min_index]);
    }
    
    for(int i=0;i<n;i++){
        cout<<vect[i]<<" ";
    }
}

// ist loop is for iterating /pointing the element
// 2nd loop is for finding min_element_index
// if(min_index found) swap it
o(n2)
