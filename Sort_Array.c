#include<stdio.h>

void SortArray(int A[],int n)
{
    int i,count=0;
    for(i=0; i<n; ++i)
    {
        if(A[i]==0)
        {
            count++;
        }
    }
    for(i=0; i<count; ++i)
    {
        A[i]=0;
    }
    for(i=count; i<n; ++i)
    {
        A[i]=1;
    }

}


void PrintArray(int A1[],int n)
{
    int i;
    for(i=0; i<n; ++i)
    {
        scanf("%d",&A1[i]);
    }
    for(i=0; i<n; ++i)
    {
        printf("%d ",A1[i]);
    }
    printf("\n");
}

int main()
{

    int n;
    printf("Enter N:");
    scanf("%d",&n);

    int A[n];

    PrintArray(A,n);

    printf("SortArray.\n");

    SortArray(A,n);
    for(int i=0; i<n; ++i)
    {
        printf("%d ",A[i]);
    }
    printf("\n");


    return 0;

}
