#include <stdio.h>
#include<conio.h>

void main()
{
    int array[3][3];
    int i,j;
    int *p=array;    // Pointer to arr[0]
    printf("Enter elements in array:\n");
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
           printf("Element - [%d][%d] - ",i,j);
           scanf("%d",p);
           p++;
       }
          
    }
    p=array;
    printf("The matrix is :\n");
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
           printf("%d\t",*p);
           p++;
       }
       printf("\n");
    }
}
