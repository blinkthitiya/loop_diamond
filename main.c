#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,k;
    printf("how many lines? ");
    scanf("%d",&n);

//top part of diamond
    for(i=1;i<=n;i++){

        for(j=i;j<=n;j++) printf(" ");

        for(k=1;k<=2*i-1;k++)printf("*");

        printf("\n");
    }

//bottom part of diamond
    for(i=n-1;i>=1;i--){

        for(j=n;j>=i;j--) printf(" ");

        for(k=1;k<=2*i-1;k++) printf("*");

        printf("\n");
    }

    return 0;
}
