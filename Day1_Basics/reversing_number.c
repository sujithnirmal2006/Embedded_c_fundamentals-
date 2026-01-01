#include<stdio.h>
int main(){
    int num,rev=0,div;
    printf("enter num");
    scanf("%d",&num);
    while(num!=0){
        div=num%10;
        rev=rev*10+div;
        num=num/10;
    }
    printf("%d",rev);
}
