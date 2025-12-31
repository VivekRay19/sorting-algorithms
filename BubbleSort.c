// Student Name: Vivek Ray
// Student ID: 240872


#include <stdio.h> 

void arrays(int* A, int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void bubblesort(int* A, int n)
{
    int temp;
    for(int i=0; i < n-1; i++)   
    {
        for(int j=0; j < n-1-i; j++)
        {
            if(A[j] > A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int A[n];

    printf("Enter %d elements:\n", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("INP: ");
    arrays(A, n);

    bubblesort(A, n);

    printf("BUB: ");
    arrays(A, n);

    return 0;
}
