#include<stdio.h>

int main()
{
    int n,a,x,num=1;

    printf("Input the number of rows: ");
    scanf("%d",&n);

    for(a=1;a<=n;a++){
        for(x=1;x<=a;x++){
            printf("%d ",num++);
        }
        printf("\n");
    }
    return 0;
}