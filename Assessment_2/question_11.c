#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    b=a%10;//last digit
    c=a/10;//fist digit    
    printf("%d",c>=b);
}
