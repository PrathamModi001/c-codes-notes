#include<stdio.h>

int main()
{
    int n,a,times=1;

    printf("Input number of terms: ");
    scanf("%d",&n);

    printf("The even numbers are:\n ");
    for(a=1;times<=n;a++){
        if(a%2==0){
            printf("%d ",a);
            times++;
        }
    }
    return 0;
}