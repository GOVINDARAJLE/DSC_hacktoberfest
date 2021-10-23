//array input and output 

#include <stdio.h>

int main()
{
    int arr[10];
    int i, n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the elements of array: ");

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("The array is: ");
    
    
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;

}
