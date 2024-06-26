//2. ek array lena hai usme count karne hai kinte positive values hai agar positive values ka count even hota hai to fir ek function lena hai usme 2 array lena hai usme yeh check ki kitne common elements hai.

#include<bits/stdc++.h>
using namespace std;



void evenValue();

int main(){
    vector<int>arr ={
        5,4,3,2,1,6,2,8,2
    };
    int count=0;
    for(auto it:arr){
        if(it>0){
            count++;
        }
       
    }
   if(count%2==0){
        evenValue();
   }
   return 0;
}
void evenValue(){
     cout<<"evenValue loop work"<<endl;
    vector<int>arr1 ={5,4,3,2,1,6,299,34,21};
    vector<int>arr2 ={5,4,3,2,1,63,3,44,55,66};
    int common=0;
    for(auto it:arr2){
       
        if(find(arr1.begin(),arr1.end(),it)!=arr1.end()){
            common++;
            cout<<common;
            
        }
        
        
    }
   cout << common;
    return ;
}
