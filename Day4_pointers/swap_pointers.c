#include<stdio.h>
void swap(int *x,int *y){//function declaration
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int a,b;
    printf("a=\n");
    scanf("%d",&a);
    printf("b=\n");
    scanf("%d",&b);
    swap(&a,&b);//function call
    printf("a=%d\nb=%d",a,b);
}
