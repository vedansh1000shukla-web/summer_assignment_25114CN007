#include <stdio.h>

int main() {
    int n,i,f;
    f=1;
    printf("enter a number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    
        printf("factorial of number is %d",f);
    
   
   
    return 0;
}