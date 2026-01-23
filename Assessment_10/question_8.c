#include <stdio.h>
#include <string.h>

int main()
{
    char num[51];
    fgets(num, 51, stdin);
    int len = strlen(num);
    if (num[len - 1] == '\n')
        len--;
    for (int i = 0; i < len; i++)
    {
        if (num[i] < '0' || num[i] > '9')
        {
            printf("invalid");
            return 0;
        }
    }
    printf("valid");
    return 0;
}
