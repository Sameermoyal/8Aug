/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//dual pointer multiply

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a=20;
    int *ptr1=&a;
    int **ptr2=&ptr1;
    
    float b=10;
   float *pt1=&b;
  float **pt2=&pt1;
    
    float c=**ptr2 * **pt2 ;
    cout <<c;

    return 0;
}
