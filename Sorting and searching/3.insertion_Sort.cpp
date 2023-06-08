#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=6;
    vector<int>vect(n);
    for(int i=0;i<n;i++){
        cin>>vect[i];
    }
    for(int i=1;i<n;i++){
        int current=vect[i];
        int prev=i-1;
        while(prev>=0 and vect[prev]>current){
            vect[prev+1]=vect[prev];
            prev=prev-1;  //loop terminater
        }
        vect[prev+1]=current;
    }
    for(int i=0;i<n;i++){
        cout<<vect[i]<<" ";
    }
}

