#include <stdio.h>
int main() {
    int arr[100],n;
    printf("enter array size:");
    scanf("%d",&n);
    for(int i=0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    int *p = arr;
    for (int i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }
}
