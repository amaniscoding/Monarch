#include <stdio.h>

void asc_sort(int a[100], int n);
void dec_sort(int a[100], int n);
void main()
{
    int a[100], i, n;

    printf("Enter n:\n");
    scanf("%d", &n);

    
    for (i = 0; i < n; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }
    printf("\n");
    int choice;
    printf("Enter your choice:\n");
    scanf("%d", &choice);
    
    if (choice == 1)
    {
        asc_sort(a, n);
        printf("Array in ascending order is:\n");
        for (i = 0; i < n; i++)
        {
            printf("%d\t", a[i]);
        }
    }
    else if (choice == 2)
    {
        dec_sort(a, n);
        printf("Array in decending order is:\n");
        for (i = 0; i < n; i++)
        {
            printf("%d\t", a[i]);
        }
    } 
    
}


void asc_sort(int a[10], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void dec_sort(int a[10], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}