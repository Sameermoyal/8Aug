//1. ek array lena hai usme apko positive negative aur 0 lene hai ab apko ratio nikalna hai of postive negative and 0 from the complete array return those 3 ratios from a function.


#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr={1,2,3,4,5,-1,-2,-3,0,0} ;
    
    
    int l;
    map<char,int>count={ {'p',0},{'n',0},{'z',0} };
    l=arr.size();
    for(auto it:arr){
        if(it>0){
           count['p']++;
        }
        if(it<0){
           count['n']++;
        }
        if(it==0){
           count['z']++;
        }
    }
    float r,s,v;r=count['p'];s=count['n'];v=count['z'];
    
    cout<<"positive ratio : " <<r/l<<" Negative ratio : "<<s/l<<" zero ratio : "<<v/l;
}