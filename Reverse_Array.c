// Iterative C program to reverse an array.

#include<stdio.h>
/*int main()
{
    int n,i,j,t;
    printf("Enter A Number:");
    scanf("%d",&n);

    int A[n];
    for(i=0;i<n;++i){
        scanf("%d",&A[i]);
    }

    for(i=0;i<n;++i){
        printf("%d ",A[i]);
    }
    for(i=0,j=n-1;i<j;++i,--j){
        t=A[i];
        A[i]=A[j];
        A[j]=t;
    }

    printf("Reverse Array.\n");
    for(i=0;i<n;++i){
        printf("%d ",A[i]);
    }

    return 0;

}*/

void ReverseArray(int A[],int n)
{
    int start=0,end;
    end=n-1;

    while(start<end)
    {
        int t;
        t=A[start];
        A[start]=A[end];
        A[end]=t;

        ++start;
        --end;
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

    printf("Reverse Array.\n");

    ReverseArray(A,n);
    for(int i=0; i<n; ++i)
    {
        printf("%d ",A[i]);
    }
    printf("\n");

    return 0;
}
