#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x;
    // int형 오브젝트 생성
    x = calloc(1, sizeof(int));
    if(x == NULL)
        puts("Failed");
    else{
        *x = 57;
        printf("%d\n", *x);
        free(x);
    }
    return 0;
}