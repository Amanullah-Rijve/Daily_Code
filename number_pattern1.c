#include<stdio.h>
int main()
{
    int n,row,col;

    printf("Enter a Integer: ");
    scanf("%d",&n);

    for(row=1; row<=n; row++){

        for(col=1; col<=row; col++){
             printf("%d",col);
        }
    printf("\n");
    }
    printf("\n");

   return 0;
}


