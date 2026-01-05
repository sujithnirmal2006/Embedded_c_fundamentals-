//pointer is the variable that stores the address of the another variable
//Value  → stored in memory
//Address → location of that memory
//Pointer → stores the address
#include<stdio.h>
int main(){
    int a=5,*p;
    p=&a;
    printf("p=%d",p);
    printf("\n*p=%d",*p);
}
  
