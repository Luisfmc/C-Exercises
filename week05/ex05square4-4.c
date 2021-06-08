#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int x,z,n;

    printf("Write 4 and press enter:\n");
    scanf("%d",&n);

    for(x=0; x<n ; x++){
        for(z=0; z<n; z++)
            printf("*");
        printf("\n");
    }

    return 0;
}
