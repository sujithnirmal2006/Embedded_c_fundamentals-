#include<stdio.h>
 void disp_descend();
 int a=10,b,c;
int main()
{
    disp_descend();
}
void disp_descend()
{
    while(a<100)
    {
        //b=a%10;
        c=a/10;
       if((a%2==1)&&(c==7))
       {b=b+a; }
        a++;
    } printf("%d\n",b);
}
