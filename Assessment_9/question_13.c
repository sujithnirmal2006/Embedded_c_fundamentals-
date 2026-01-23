#include <stdio.h>
int main()
{
    int x[1000];
    int i,e=0;
    int y[e];
    for(i=0;i<1000;i++)
    {
        scanf("%d",&x[i]);
        if(x[i]==0)
        {
            break;
        }
        else
        {
            y[e]=x[i];
            e++;
        }
    }
    if(y[0]==y[e-1])
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
}
