/* Factorial of a number */

#include <stdio.h>
void main()
{
    int i, n,fact=1;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        fact=fact*i;
           }
    printf("Factorial of the Number %d is %d",n,fact);
    
}
