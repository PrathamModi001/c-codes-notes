#include<stdio.h>

int main()
{
    int n,a,x;

    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(a=1;a<=n;a++){
        for(x=1;x<=a;x++){
            printf("%d",x);
        }
        printf("\n");
    }
    return 0;
}