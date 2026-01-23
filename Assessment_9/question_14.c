#include <stdio.h>
int main()  
{
    int x[1000];
    int i,c=0,d=0;
    for(i=0;i<1000;i++)
    {
        scanf("%d",&x[i]);
        if(x[i]==0)
        {
            break;
        }
        else
        {
            d=d+x[i];
            c++;
        }
    }
    if(c%2!=0)
    {
        printf("%d",x[c/2]);
    }
    else
    {
        int mid1=x[(c/2)-1];
        int mid2=x[c/2];
        int avg=(mid1+mid2)/2;
        printf("%d",avg);
    }
}
