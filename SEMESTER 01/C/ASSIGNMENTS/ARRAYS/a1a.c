//Write programs to manipulate arrays (sorting, searching, insertion, deletion).
//Write a c programm to sort elements of 1d array in ascensing order. Array size and elements are user defined.
//NOT WORKING
#include <stdio.h>
int main()
{
    int size, p;

    printf("\nEnter the size of 1d array: ");
    scanf("%d", &size);

    int i, a[size];

    printf("\n");
    printf("Enter the values of 1d array:\n"); 
    for(i=0; i<size; i++)
    {
        printf("Enter the value of element %d: ", i);
        scanf("%d", &a[i]);
    }
    printf("\n");
    
    printf("Your 1d array is: \n");
    printf("{");
    for(i=0; i<size-1; i++)
    {
        printf("%d, ", a[i]);
    }
    for(i=size-1; i<size; i++)
    {
        printf("%d", a[i]);
    }
    printf("}");
    printf("\n");

    for(int j=0, count = 0; j<=size; j++)
    {
        if(count!=0)
        {
            for(int temp, count=0, k=0; k<=size-2; k++)
            {
                if (a[k] >= a[k+1])
                {
                    temp=a[k];
                    a[k]=a[k+1];
                    a[k+1]=temp;
                    count=1;
                }
            }
        }
        else
        {
            break;
        }
    }
    printf("\n");
            
    printf("Your new 1d array is: \n");
    printf("{");
    for(i=0; i<size-1; i++)
    {
        printf("%d, ", a[i]);
    }
    for(i=size-1; i<size; i++)
    {
        printf("%d", a[i]);
    }
    printf("}\n");

    return 0;            

}
