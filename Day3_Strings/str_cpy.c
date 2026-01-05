#include <stdio.h>

int main() {
    char src[50], dest[50];
    int i = 0;

    printf("Enter source string: ");
    fgets(src, sizeof(src), stdin);

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

    printf("Copied string: %s", dest);

    return 0;
}
