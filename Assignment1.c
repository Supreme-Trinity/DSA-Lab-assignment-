/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void swap (int *a, int *b){
    *a=*a-*b;
    *b=*a+*b;
    *a=*b-*a;
}
int main()
{   
    int a=10;
    int b=20;
    printf("%d %d \n",a,b);
    swap(&a,&b);
    printf("%d %d",a,b);
    

    return 0;
}
