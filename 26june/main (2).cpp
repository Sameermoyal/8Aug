// 3.ek function lena hai usme 2 arrays lena hai 2 arrays mai yeh check karna hai 
// arr1 [ 15, 25 , 36 ] 
// arr2 [25,36,78] 
// arr1[i]>arr2[i] arr1 a ki value a++ karni hai 
// arr1[i]<arr2[i] arr2 b ki value ko b++ karna hai 
// last mai yeh check karna hai arr1 aur arr2 mai kon jita agar a1 aur a2 barabar ho jate hai 
//fir yeh check karna hai ki odd prime hai ya nahi if odd prime then a2 wins otherwise a1 wins agar even hota hai 
//aur power of 2 to a1 jitega nahi to a2.


    bool isPrime(int n) {
    if (n <= 1 ) {
        return false; 
    }
  
    if (n % 2 == 0) {
        return false; 
    }
    
    
    for (int i = 3; i <= n; i += 2) {
        if (n % i == 0) {
            return false; 
        }
   
   
    }
    
    return true; 
}
       
       
  
bool isPowerOfTwo(int n) {
 
    return (n > 0) && ((n & (n - 1)) == 0);
}     
       
       
       
#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int> arr1 ={2 } ;
   vector<int> arr2 ={25,36,78} ;
   
   int a1=0,a2=0;
   for(auto it:arr1){
       a1+=it;
   }
   for(auto it:arr2){
       a2+=it;
   }
   
   if(a1>a2){
       cout<<"arr1 is win";
   }else if(a2>a1){
       cout<<"arr2 is win";
   }else{
       
       if(isPowerOfTwo(a1)){
           cout<<"arr1 wins";
           
       }else{
          int b= isPrime(a2);
          
          if(b){
              cout<<"arr2 wins";
          }else{
              
                cout<<"arr1 wins";  
          }
      
       }
       
   
       
       
       
       
   }
  
}