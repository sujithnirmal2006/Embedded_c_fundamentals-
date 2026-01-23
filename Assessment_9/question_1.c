#include <stdio.h>
int main()
{
    int b=0;
    int x[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
        b=b+x[i];
    }
    printf("%d",b);
}
